#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "What is your age?: ";
	cin >> age;
	if (age < 16){
		cout << "Too young to drive";
	}else if (age == 16){
		cout << "Better to clear the road";
	}else{
		cout << "You're getting too old";
	}
	
	return 0;
}
