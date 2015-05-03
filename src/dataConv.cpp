#include "dataConv.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
dataConv::dataConv()
{
    char type;
    long double q;
    char quit;
    start:
    system("CLS");
    cout << "E-Data Converter" << endl;
    cout << endl;
    cout << "===========" << endl;
    cout << "1: Byte" << endl;
    cout << "2: Kilobyte" << endl;
    cout << "3: Megabyte" << endl;
    cout << "4: Gigabyte" << endl;
    cout << "5: Terabyte" << endl;
    cout << "===========" << endl;
    cout << endl;
    cout << "What data type are you converting from? ";
    cin >> type;
    switch (type) {
        case '1':
            system("CLS");
            cout << "How many bytes? ";
            cin >> q;
            cout << endl;
            cout << setprecision(20) << q << " bytes is equal to: \n" <<
            q / 1024 << " Kilobytes\n" <<
            q / 1024 / 1024 << " Megabytes\n" <<
            q / 1024 / 1024 / 1024 << " Gigabytes\n" <<
            q / 1024 / 1024 / 1024 / 1024 << " Terabytes\n" << endl;
            cout << endl;
            break;
        case '2':
            system("CLS");
            cout << "How many kilobytes? ";
            cin >> q;
            cout << endl;
            cout << setprecision(20) << q << " kilobytes is equal to: \n" <<
            q * 1024 << " bytes\n" <<
            q / 1024 << " Megabytes\n" <<
            q / 1024 / 1024 << " Gigabytes\n" <<
            q / 1024 / 1024 / 1024 << " Terabytes\n" << endl;
            cout << endl;
            break;
        case '3':
            system("CLS");
            cout << "How many megabytes? ";
            cin >> q;
            cout << endl;
            cout << setprecision(20) << q << " megabytes is equal to: \n" <<
            q * 1024 * 1024 << " bytes\n" <<
            q * 1024 << " Kilobytes\n" <<
            q / 1024 << " Gigabytes\n" <<
            q / 1024 / 1024 << " Terabytes\n" << endl;
            cout << endl;
            break;
        case '4':
            system("CLS");
            cout << "How many gigabytes? ";
            cin >> q;
            cout << endl;
            cout << setprecision(20) << q << " gigabytes is equal to: \n" <<
            q * 1024 * 1024 * 1024 << " bytes\n" <<
            q * 1024 * 1024 << " Kilobytes\n" <<
            q * 1024 << " Megabytes\n" <<
            q / 1024 << " Terabytes\n" << endl;
            cout << endl;
            break;
        case '5':
            system("CLS");
            cout << "How many terabytes? ";
            cin >> q;
            cout << endl;
            cout << setprecision(20) << q << " terabytes is equal to: \n" <<
            q * 1024 * 1024 * 1024 * 1024 << " bytes\n" <<
            q * 1024 * 1024 * 1024 << " Kilobytes\n" <<
            q * 1024 * 1024 << " Megabytes\n" <<
            q * 1024 << " Gigabytes\n" << endl;
            cout << endl;
            break;
        default:
            goto start;
    }
    cout << "Would you like to do another conversion? (Y/N) ";
    cin >> quit;
    if (quit == 'y' || quit == 'Y') {
        goto start;
    }
}

dataConv::~dataConv()
{
    //dtor
}
