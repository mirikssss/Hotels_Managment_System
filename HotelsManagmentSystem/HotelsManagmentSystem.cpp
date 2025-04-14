#include <iostream>
#include "HMS_classes.h"
#include <string>
#include <vector>
using namespace std;


void admin_registr() {
    string adm_login;
    string adm_password;
    while (true) {
        cout << "Enter the LOGIN: ";
        getline(cin, adm_login);
        cin.ignore();
        cout << "Enter the PASSWORD: ";
        cin.ignore();
        getline(cin, adm_password);
        if (adm_login == "mirik" and adm_password == "mirik") {
            Admin *adms = new Admin;
            adms->Menu();
            break;
        }
        else if (adm_login == "mirik" and adm_password != "mirik") {
            cout << "Invalid password! Try again \n";
        }
        else if (adm_login != "mirik" || adm_password == "mirik") {
            cout << "Invalid login! Try again \n";
        }
    }
}

void main_registr() {
    int main_reg;
        cout << "ARE YOU: \n1. User \n2. Administrator" << endl;
        while (true) {
            cin >> main_reg;
       
            switch (main_reg) {
            case 1: {

            }
            case 2: {
                admin_registr();
            }
            default: {
                cout << "Invalid input! Try again!\n";
            }
            }
        }
}










int main()
{
   
   cout << "\t\t\t\t--- WELCOME TO HOTELS MANAGEMENT SYSTEM ---" << endl;
   cout << "To choose necessary option, enter the number before option!\n";
   main_registr();
 
}
