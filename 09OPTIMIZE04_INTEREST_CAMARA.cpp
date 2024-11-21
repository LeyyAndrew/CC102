#include <iostream>
using namespace std;

int main(){
	char type, level;
	float balance,rate = 0;
	cout << "Enter account type (P for Personal and B for Business): ";
	cin >> type;
	cout << "Enter account level (S for standard and G for Gold): ";
	cin >> level;
	cout << "Enter account balance: ";
	cin >> balance;
	if ((type == 'P' || type == 'p') && (level == 'S' || level == 's') && balance >= 0 && balance < 1000)
		rate = 1.2;
	else if ((type == 'P' || type == 'p') && (level == 'G' || level == 'g') && balance >= 1000)
		rate = (balance >= 5000) ? 2.3 : 1.9;
	else if ((type == 'B' || type == 'b') &&  (level == 'S' || level == 's') && balance >= 1500)
		rate = 1.7;
	else if ((type == 'B' || type == 'b') && (level == 'G' || level == 'g') && balance >= 10000)
		rate = 2.5;
	cout << (rate > 0 ? "The interest rate is: " + to_string(rate) + "%" : "Invalid account or Insufficient funds");
	
	return 0;
}