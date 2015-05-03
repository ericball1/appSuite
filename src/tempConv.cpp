#include "tempConv.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
tempConv::tempConv()
{
    char choice;
    char quit;
    float num1;
    start:
    system("CLS");
    cout << "E-Temperature Converter C++ Edition" << endl;
    cout << endl;
    cout << "========================" << endl;
    cout << "1: Fahrenheit to Celsius" << endl;
    cout << "2: Celsius to Fahrenheit" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Pick a conversion: ";
    cin >> choice;
    switch (choice) {
        case '1':
            system("CLS");
            cout << "Degrees in Fahrenheit: ";
            cin >> num1;
            cout << endl;
            cout << num1 << " in Celsius is " << (num1 - 32) * 5 / 9 << endl;
            break;
        case '2':
            system("CLS");
            cout << "Degrees in Celsius: ";
            cin >> num1;
            cout << endl;
            cout << num1 << " in Fahrenheit is " << num1 * 9 / 5 + 32 << endl;
            break;
        default:
            goto start;
    }
    cout << "Do you want to do another conversion? (Y/N) ";
    cin >> quit;
    if (quit == 'y' || quit == 'Y') {
        goto start;
    }
}

tempConv::~tempConv()
{
    //dtor
}
