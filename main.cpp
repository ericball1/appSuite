#include <iostream>
#include <iomanip>
#include <calc.h>
#include <tempConv.h>
#include <dataConv.h>
#include <license.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char mode;
    char quit;
    start:
    cout << string( 100, '\n' );
    cout << "C++ Console Application Suite Version E001" << endl;
    cout << endl;
    cout << "========================" << endl;
    cout << "1: Calculator" << endl;
    cout << "2: Temperature Converter" << endl;
    cout << "3: Data Converter" << endl;
    cout << "4: License" << endl;
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
        case '3':
            dataConv();
            break;
        case '4':
            license();
            break;
        case '0':
            return 0;
            break;
        default:
            goto start;
    }
    cout << "Would you like to do something else? (Y/N) ";
    cin >> quit;
    if (quit == 'y' || quit == 'Y') {
        goto start;
    }
    return 0;
}
