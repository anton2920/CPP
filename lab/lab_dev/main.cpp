#include <iostream>
#include <unordered_map>

int main() {

    /* Initializing variables */
    std::unordered_map<int, int> m;

    /* Main part */
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            m.insert({i, j});
            std::cout << "{ " << i << ", " << j << " } --> " <<
                m.size() << " / " << m.bucket_count() << " = " << m.load_factor() << std::endl;
        }
    }

    for (auto &i : m) {
        std::cout << i.first << " --> " << i.second << "\n";
    }

    std::cout << std::endl;

    /* Final output */
    /*for (int k = 0; k < 10; ++k) {
        for (auto i = m.begin(k); i != m.end(k); ++i) {
            std::cout << i->first << " ---> " << i->second << "\n";
        }
        std::cout << std::endl;
    }*/

    std::cout << m.bucket_size(0) << std::endl;
    std::cout << m.load_factor() << std::endl;

    /* Returning value */
    return 0;
}