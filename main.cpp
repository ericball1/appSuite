#include <iostream>
#include <calc.h>
#include <tempConv.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char mode;
    start:
    system("CLS");
    cout << "C++ Console Application Suite Version E001" << endl;
    cout << endl;
    cout << "========================" << endl;
    cout << "1: Calculator" << endl;
    cout << "2: Temperature Converter" << endl;
    cout << "0: Quit" << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "What would you like to do? ";
    cin >> mode;
    switch (mode) {
        case '1':
            calc();
            break;
        case '2':
            tempConv();
            break;
        case '0':
            return 0;
            break;
        default:
            goto start;
    }
    return 0;
}
