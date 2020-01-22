#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

class DATES {
    int day = 0;
    int month = 0;
    int year = 0;
    string punkt;
    string surname;
    string N;
    string O;
    int flight_number = 0;

public:

    DATES() {

    }

    DATES(list<DATES> &data) {
        int day = 0;
        int month;
        int year;
        string punkt;
        string surname;
        string N;
        string O;
        int flight_number;
        DATES temp;
        ifstream file("input.txt");

        if (file) {
            while (!file.eof()) {

                file >> flight_number >> surname >> N >> O >> punkt >> day >> month >> year;
                temp.flight_number = flight_number;
                temp.surname = surname;
                temp.N = N;
                temp.O = O;
                temp.punkt = punkt;
                temp.day = day;
                temp.month = month;
                temp.year = year;

                data.push_back(temp);

            }
        } else
            cout << "Файл не найден!!!" << endl;

        file.close();
    }

    /*
    DATES(list<DATES> &data)
    {
        int n = 0;
        int day = 0;
        int month;
        int year;
        string punkt;
        string surname;
        string N;
        string O;
        int flight_number;
        DATES temp;

        do
        {
        cout << "Номер рейса:" << endl;
        do{cin >> flight_number;}while (flight_number < 1);
        cout << "Инициалы(Фамилия и буквы через пробел):" << endl;
        cin >> surname >> N >> O;
        cout << "Пункт назначения:" << endl;
        cin >> punkt;
        cout << "Месяц: " << endl;
        do{cin >> month;}while (month < 1 || month > 12);
        cout << "День: " << endl;

            if (month == 1) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 2) {do{cin >> day;}while (day < 1 || day > 29);}
            else if (month == 3) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 4) {do{cin >> day;}while (day < 1 || day > 30);}
            else if (month == 5) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 6) {do{cin >> day;}while (day < 1 || day > 30);}
            else if (month == 7) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 8) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 9) {do{cin >> day;}while (day < 1 || day > 30);}
            else if (month == 10) {do{cin >> day;}while (day < 1 || day > 31);}
            else if (month == 11) {do{cin >> day;}while (day < 1 || day > 30);}
            else if (month == 12) {do{cin >> day;}while (day < 1 || day > 31);}

        cout << "Год: " << endl;
        do{cin >> year;}while (year < 2020 || year > 2025);

        temp.flight_number = flight_number;
        temp.surname = surname;
        temp.N = N;
        temp.O = O;
        temp.punkt = punkt;
        temp.day = day;
        temp.month = month;
        temp.year = year;

        data.push_back(temp);
        cout << "Добавить новую заявку?\n";
        cout << "0 для добавления\n";
        cout << "Любая другая цифра - отмена\n";
            cin >> n;
        }while (n == 0);

    }*/

    void output(list<DATES> data) {
        cout << "Все найденные заявки: \n";
        cout << "-----------------" << endl;
        for (auto iter = data.begin(); iter != data.end(); iter++) {
            cout << "Номер рейса: " << iter->flight_number << endl;
            cout << "Инициалы: " << iter->surname << " " << iter->N << "." << iter->O << "." << endl;
            cout << "Пункт назначения: " << iter->punkt << endl;
            cout << "Дата: " << iter->day << "." << iter->month << "." << iter->year << endl;
            cout << "-----------------" << endl;
        }
    }

    void outputset(list<DATES> data) {
        int reys = 0;
        int m = 0, d = 0, y = 0;
        cout << "Введите номер рейса и дату, чтобы найти заявку:" << endl;
        cout << "Номер рейса: \n";
        do { cin >> reys; } while (reys < 1);
        cout << "Месяц: \n";
        do { cin >> m; } while (m < 1 || m > 12);
        cout << "День: \n";
        if (m == 1) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 2) { do { cin >> d; } while (d < 1 || d > 29); }
        else if (m == 3) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 4) { do { cin >> d; } while (d < 1 || d > 30); }
        else if (m == 5) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 6) { do { cin >> d; } while (d < 1 || d > 30); }
        else if (m == 7) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 8) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 9) { do { cin >> d; } while (d < 1 || d > 30); }
        else if (m == 10) { do { cin >> d; } while (d < 1 || d > 31); }
        else if (m == 11) { do { cin >> d; } while (d < 1 || d > 30); }
        else if (m == 12) { do { cin >> d; } while (d < 1 || d > 31); }
        cout << "Год: \n";
        do { cin >> y; } while (y < 2020 || y > 2025);
        bool flag = 0;
        DATES temp;
        cout << "Все найденные заявки: \n";
        for (auto iter = data.begin(); iter != data.end(); iter++) {
            temp = *iter;
            if (temp.flight_number == reys && temp.month == m && temp.day == d && temp.year == y) {
                cout << "-----------------" << endl;
                cout << "Номер рейса: " << iter->flight_number << endl;
                cout << "Инициалы " << iter->surname << " " << iter->N << "." << iter->O << "." << endl;
                cout << "Пункт назначения " << iter->punkt << endl;
                cout << "Дата " << iter->day << "." << iter->month << "." << iter->year << endl;
                cout << "-----------------" << endl;
                flag = 1;
            }
        }
        if (flag == 0) cout << "Таких билетов нет" << endl;
    }

    void deletefromlist(list<DATES> &data) {
        DATES temp;
        int number = 0;
        cout << "Введите номер рейса заявки, чтобы удалить билет" << endl;
        do { cin >> number; } while (number < 1);

        for (auto iter = data.begin(); iter != data.end(); iter++) {
            //temp = *iter;
            if (iter->flight_number == number) {
                data.erase(iter);
                break;
            }
        }
    }

};

void menu() {
    list<DATES> data;
    int option = 0;

    cout << "Добавление заявок в список " << endl;
    DATES DATES(data);
    //DATES.output(data);

    cout << "Выбирите дальнейшее действие: " << endl;
    cout << "1)Удаление заявок: " << endl;
    cout << "2)Вывод заявок по заданному номеру рейса и дате вылета: " << endl;
    cout << "3)Вывод всех заявок: " << endl;

    do { cin >> option; } while (option < 1 || option > 3);
    if (option == 1) {
        DATES.deletefromlist(data);
        DATES.output(data);
        cout << "1)Запустить программу сначала: " << endl;
        cout << "2)Выйти из программы: " << endl;

        do { cin >> option; } while (option < 1 || option > 2);

        if (option == 1) { menu(); }
        else if (option == 2) { exit(EXIT_FAILURE); }

    } else if (option == 2) {
        DATES.outputset(data);
        cout << "1)Запустить программу сначала: " << endl;
        cout << "2)Выйти из программы: " << endl;

        do { cin >> option; } while (option < 1 || option > 2);

        if (option == 1) { menu(); }
        else if (option == 2) { exit(EXIT_FAILURE); }
    } else if (option == 3) {
        DATES.output(data);
        cout << "1)Запустить программу сначала: " << endl;
        cout << "2)Выйти из программы: " << endl;

        do { cin >> option; } while (option < 1 || option > 2);

        if (option == 1) { menu(); }
        else if (option == 2) { exit(EXIT_FAILURE); }
    }

}

int main(int argc, const char *argv[]) {
    menu();
    return 0;
}
