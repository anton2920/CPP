#include <iostream>
// #include <string>
// #include <clocale>
// #include <Windows.h> // Windows only
#include <fstream>
#include <cstdlib>
using namespace std;







int main() {
    //setlocale(LC_CTYPE, "Russian");

    // Output

    cout << "Hello, World!" << endl;

    // Variables

    int num = 10;
    cout << "Num is: " << num << endl;

    int num1;
    cout << "Type num1: ";
    num1 = rand() % 20;
    cout << "User wrote: " << num1 << endl;
    int result;
    result = num + num1;
    cout << "The sum of num and num1 is: " << result << endl;


    // if -> else

    if (result < 7){
        cout << "Result is small" << endl;
    } else if (result == 15 || result == 19){
        result == 15 ? cout << "Result is equal to 15" << endl : cout << "Result is equal to 19" << endl;
    }
    else {
        cout << "Result is big!" << endl;
    }

    // Switch

    switch (result){
        case 12:
            cout << "Result is equal to 12" << endl;
            break;
        default:
            cout << "Result is unknown" << endl;
    }

    // Strings

    string name;
    cout << "Enter your name: ";
    // cin >> name;
    if (name.length() != 0) {
        cout << "Your name is: " << name << endl;
    } else {
        cout << "Error!" << endl;
    }



    // Cycles

    for (int counter = 0; counter < 10; counter++){
        cout << " " << counter;
    }

    cout << endl;
    int i = 0;

    while (i < 20){
        cout << " " << i;
        i++;
    }

    i = 0;
    cout << endl;

    do {
        cout << " " << i;
        i++;
    } while (i < 0);

    cout << endl;

    for (int j = 1; j <= 20; j++ ){
        if (j % 5 != 0){
            cout << " " << j;
            continue;
        }
        if (j == 15){
            break;
        }
    }

    // Exceptions

    cout << endl;
    int a,b;

    cout << "Type a: ";
    a = rand();
    cout << "Type b: ";
    b = rand();

    cout << "a + b = " << a + b << endl;

    try {
        if (b == 0){
            throw 123;
        } else {
            cout << "a / b = " << a / b << endl;
        }
    } catch (int c){
        cout << "Before you try to divide by zero, make sure, that our software is able to do it" << endl;
    }


    // Arrays

    int arr[3] = {3, 7, 5};
    cout << arr[0] << endl;

    for (int i1 = 0; i1 < 3; i1++ ){
        cout << " " << arr[i1];
    }

    cout << endl;

    int arr1[10][10];
    for (int i2 = 0; i2 < 10; i2++){
        for (int i3 = 0; i3 < 10; i3++) {
            arr1[i2][i3] = rand() % 101;
            cout << " " << arr1[i2][i3];
        }
        cout << endl;
    }

    // Ukazatel

    int value = 8;
    int *ptrvalue = &value;
    int **ptr_ptrvalue = &ptrvalue;

    **ptr_ptrvalue = rand() % 101;
    cout << "Value is: " << value << endl;

    cout << "Привет!" << endl;

    // Strings

    char string[6] = "Hello";
    char string1[6] = {'H','e','l','l','o','\0'};
    char string2[] = "Hello world!";

    // Files

    ofstream outputs;
    outputs.open("output.txt", ios_base::app);
    cout << "Work with files in c++" << endl;
    outputs << "Hello, World!" << endl;
    outputs.close();

    char text[50];

    ifstream inputs;
    inputs.open("input.txt");
    if (!inputs.is_open()){
        cout << "Error!";
    } else {
        inputs.getline(text, 50);
        cout << text << endl;
        inputs.close();
    }

    return 0;
}
