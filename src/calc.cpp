#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

calc::calc()
{
    using namespace std;
    char operation;
    float num1;
    float num2;
    char quit;
    start:
    system("CLS");
    cout << "E-Calculator C++ Edition" << endl;
    cout << endl;
    cout << "=================" <<endl;
    cout << "1: Addition" << endl;
    cout << "2: Subtraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cout << "=================" << endl;
    cout << endl;
    cout << "What operation would you like to do? ";
    cin >> operation;
    switch (operation) {
        case '1':
            system("CLS");
            cout << "What is the first number? ";
            cin >> num1;
            cout << "What is the second number? ";
            cin >> num2;
            cout << endl;
            cout << "The answer is: " << num1 + num2 << endl;
            break;
        case '2':
            system("CLS");
            cout << "What is the first number? ";
            cin >> num1;
            cout << "What is the second number? ";
            cin >> num2;
            cout << endl;
            cout << "The answer is: " << num1 - num2 << endl;
            break;
        case '3':
            system("CLS");
            cout << "What is the first number? ";
            cin >> num1;
            cout << "What is the second number? ";
            cin >> num2;
            cout << endl;
            cout << "The answer is: " << num1 * num2 << endl;
            break;
        case '4':
            system("CLS");
            cout << "What is the first number? ";
            cin >> num1;
            cout << "What is the second number? ";
            cin >> num2;
            cout << endl;
            cout << "The answer is: " << num1 / num2 << endl;
            break;
        default:
            goto start;
    }
    cout << endl;
    cout << "Do you want to do another calculation? (Y/N) ";
    cin >> quit;
    if (quit == 'Y' || quit == 'y') {
        goto start;
    }
}

calc::~calc()
{
    //dtor
}
