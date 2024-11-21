#include <iostream>
using namespace std;

int main(){
	char type, level;
	double balance,rate = 0;
	cout << "Enter account type (P for Personal and B for Business): ";
	cin >> type;
	cout << "Enter account level (S for standard and G for Gold): ";
	cin >> level;
	cout << "Enter account balance: ";
	cin >> balance;
	if (type == 'P' || type == 'p'){
		if (level == 'S' || level == 's'){
			if (balance >= 0 && balance < 1000){
				rate = 1.2;
			}
		}else if (level == 'G' || level == 'g'){
			if (balance >= 1000 && balance < 5000){
				rate = 1.9;
			}else if (balance >= 5000){
				rate = 2.3;
			}
		}
	}else if (type == 'B' || type == 'b'){
		if (level == 'S' || level == 's'){
			if (balance >= 1500){
				rate = 1.7;
			}
		}else if (level == 'P' || 'p'){
			if (balance >= 10000){
				rate = 2.5;
			}
		}
	}
	if (rate > 0){
		cout << "The interest rate is: " << rate << "%";
	}else{
		cout << "Invalid account or Insufficient balance";
	}
	
	return 0;
}
