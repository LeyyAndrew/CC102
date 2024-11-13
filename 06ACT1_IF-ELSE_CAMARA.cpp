#include <iostream>
using namespace std;

int main()
{
	int temp;
	cout << "Enter temperature in degree farenheight: ";
	cin >> temp;
	if (temp < 32){
		cout << "Bring Heavy Jacket";
	}else if (temp >= 32 && temp <= 50){
		cout << "Bring a light jacket";
	}else{
		cout << "No need to bring jacket";
	}
	
	return 0;
}
