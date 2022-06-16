#include <array>
#include <cassert>
#include <iostream>
#include <list>
#include <map>
#include <mutex>
#include <queue>
#include <set>

const int N = 5;
const int M = 5;

typedef std::array<std::array<int, M>, N> StateArray;


enum square_colour {
    WHITE = 0,
    BLACK = 1
};


std::mutex mtx;


static void print_array(const StateArray &array)
{
    for (auto &i: array) {
        for (auto &j: i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}


int flip(int thing)
{
    return (thing == WHITE) ? BLACK : WHITE;
}


void flip_all(StateArray &state, ssize_t curr_row, ssize_t curr_col)
{
    for (ssize_t i = 0; i < N; i++) {
        for (ssize_t j = 0; j < N; j++) {
            if ((i == curr_row) && (j == curr_col)) {
                state[i][j] = flip(state[i][j]);
                if (i - 1 >= 0) {
                    state[i - 1][j] = flip(state[i - 1][j]);
                }
                if (j - 1 >= 0) {
                    state[i][j - 1] = flip(state[i][j - 1]);
                }
                if (i + 1 < N) {
                    state[i + 1][j] = flip(state[i + 1][j]);
                }
                if (j + 1 < N) {
                    state[i][j + 1] = flip(state[i][j + 1]);
                }
            }
        }
    }
}


void insert_if_not_found(std::map<StateArray, std::list<StateArray> *> &map,
                         std::queue<StateArray> &open_queue,
                         StateArray &key, StateArray &value)
{
    mtx.lock();

    auto target_result = map.find(key);
    auto source_result = map.find(value);

    if (target_result == map.end()) {
        auto insert_res = map.emplace(key, new(std::list<StateArray>));
        if (insert_res.second) {
            open_queue.push(key);
        }
        if (source_result != map.end()) {
            for (auto &i: *source_result->second) {
                insert_res.first->second->push_back(i);
            }
        }
        insert_res.first->second->push_back(value);
    }

    mtx.unlock();
}


int main()
{
    /*const StateArray source_state = {{{ BLACK, BLACK, BLACK, BLACK },
                                      { BLACK, WHITE, WHITE, BLACK },
                                      { BLACK, WHITE, WHITE, BLACK },
                                      { BLACK, BLACK, BLACK, BLACK }}};*/
    /*const StateArray source_state = {{{ WHITE, BLACK, BLACK, WHITE },
                                      { BLACK, BLACK, BLACK, BLACK },
                                      { BLACK, BLACK, BLACK, BLACK },
                                      { WHITE, BLACK, BLACK, WHITE }}};*/
    /*const StateArray source_state = {{{ BLACK, WHITE, WHITE, BLACK },
                                      { WHITE, BLACK, BLACK, WHITE },
                                      { WHITE, BLACK, BLACK, WHITE },
                                      { BLACK, WHITE, WHITE, BLACK }}};*/
    const StateArray source_state = {{{ BLACK, WHITE, WHITE, WHITE, BLACK },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { BLACK, WHITE, WHITE, WHITE, BLACK }}};

    /*const StateArray target_state = {{{ WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE }}};*/

    const StateArray target_state = {{{ WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE },
                                      { WHITE, WHITE, WHITE, WHITE, WHITE }}};

    /*const StateArray source_state = {{{ BLACK, BLACK },
                                      { WHITE, BLACK }}};
    const StateArray target_state = {{{ WHITE, WHITE },
                                      { WHITE, WHITE }}};*/

    StateArray current_state, source_of_current, answer;
    std::queue<StateArray> open_queue;
    std::map<StateArray, std::list<StateArray> *> set_of_all_seen;
    bool exit = false;

    std::cout << "Source state: " << std::endl;
    print_array(source_state);

    std::cout << std::endl << "Target state: " << std::endl;
    print_array(target_state);

    /* Making queue */
    open_queue.push(source_state);
    set_of_all_seen.emplace(source_state, new(std::list<StateArray>));

    /* Stupid game */
    while (!open_queue.empty()) {
        #pragma omp parallel for num_threads(1) default(none) private(current_state, source_of_current) shared(exit, open_queue, set_of_all_seen, std::cout, answer)
        for (ssize_t i = 0; i < N; ++i) {
            for (ssize_t j = 0; j < N; ++j) {
                if (!exit) {
                    current_state = open_queue.front();

                    source_of_current = current_state;

                    flip_all(current_state, i, j);
                    if (current_state == target_state) {
                        answer = current_state;

                        insert_if_not_found(set_of_all_seen, open_queue, answer, source_of_current);
                        std::cout << std::endl << "You win!" << std::endl;
                        exit = true;
                    }
                }
                if (exit) {
                    j = N;
                } else {
                    insert_if_not_found(set_of_all_seen, open_queue, current_state, source_of_current);
                }
            }
            if (exit) {
                i = N;
            }
        }

        open_queue.pop();
    }

    fin:
    std::cout << std::endl << "Solution: " << std::endl;
    auto res = set_of_all_seen.find(answer);
    if (res != set_of_all_seen.end()) {
        for (auto &i: *res->second) {
            print_array(i);
            std::cout << std::endl;
        }
    }
    for (auto &i: set_of_all_seen) {
        delete i.second;
    }
}
