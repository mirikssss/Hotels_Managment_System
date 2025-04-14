#pragma once
#include<iostream>
using namespace std;


class Admin {
private:
	string adm_login;
	string passward;
	string name_surname;
	int ID;

public:
	Admin():adm_login("NAN"), passward("NAN"), name_surname("NAN_NAN"), ID(0000)
	{
		cout << "WELCOME TO ADMIN PANEL " << adm_login << "!" << endl;
	}
	void Menu() {
		int options;
		cout << "\nMenu for adminastrators:\n";
		cout << "1.Client Datebase \n2.Room Managment \n3.Order Managment" << endl;
		cout << ">>>";
		
		while (true) {
			cin >> options;
			switch (options)
			{
			case 1: {
				cout << "\n--- Client Database ---" << endl;





				break;
			}
			case 2: {
				cout << "\n--- Room Managament ---" << endl;




				break;
			}
			case 3: {
				cout << "\n--- Order Management ---" << endl;




				break;
			}
			default:
				cout << "Invalid input! Try again!\n";
			}
		}
	}
};

