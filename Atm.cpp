#include <iostream>
#include "header.h"
using namespace std;


int main() {

	int menu = -1;
	int atmMoney = 0;
	int checkMoney = 0;
	int withdrawMoney = 0;

	while(menu){
		AtmMenu();
		cout << "Select an action \n";
		cin >> menu;
		switch (menu) {
			case 1: {
				InputMoney(atmMoney, checkMoney);
				break;
			}
			case 2: {
				WithdrawMoney(atmMoney, withdrawMoney);
				break;
			}
			case 3: {
				system ("cls");
				break;
			}
			case 0:{
				return 0;	   
			}
			default: {
				cout << "select 1, 2, 3 or 0 action \n";	
				break;
			}
		}
	}
	return 0;
}

