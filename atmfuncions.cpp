#include <iostream>
#include "header.h"
using namespace std;

void AtmMenu() {
	cout << "\n"; 
	cout << "================================================ \n";
	cout << "1 - add money to ATM \n";
	cout << "2 - withdraw money from ATM \n";
	cout << "3 - clear console \n";
	cout << "0 - exit from ATM \n" ;
	cout << "================================================ \n\n" ;
}

// input money into the ATM 
void InputMoney(int &atmMoney, int cash){
	int option = 0;
	do {
		cout << "enter amount of cash: \n";
		cin >> cash;
		if (cash % 5 == 0 || cash % 10 == 0 || cash % 20 == 0) {
			atmMoney += cash;
			cout << "the ATM store " << atmMoney << " cash \n" ; 
		} 
		else {
			cout << "it is possible to enter banknotes only with a face value of 5, 10, 20 \n"; 
		}

		cout << "press 0 to backward, 1 - to continue \n";
		cin >> option;
		if (!option){
			break;
		}
	} while (option);
}

// withdraw money from an ATM if the entered amount of cash is available
void WithdrawMoney(int &atmMoney, int withdrawMoney){
	int option = 0;
	do {
		cout << "enter amount of money to withdraw from the ATM: \n";
		cin >> withdrawMoney;
		if (withdrawMoney <= atmMoney){
			if (withdrawMoney % 5 == 0 || withdrawMoney % 10 == 0 || withdrawMoney % 20 == 0){
				atmMoney -= withdrawMoney;
				cout << "the ATM left " << atmMoney << " cash \n" ; 
			}
			else if (withdrawMoney % 5 != 0 || withdrawMoney % 10 != 0 || withdrawMoney % 20 != 0){
				cout << "enter the number multiple of 5, 10, 20 \n";
			}
		
		} 
		else {
			cout << "ATM does not have enough funds for dispensing! \n";
			cout << "you can withdraw only " << atmMoney << " cash \n"; 
		}

		cout << "press 0 to backward, 1 - to continue \n";
		cin >> option;
		if (!option){
				break;
		}
	} while (option);
}
