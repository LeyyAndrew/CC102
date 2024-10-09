#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;
	
	cout << "sum: "  << a << '+' << b << '=' << a+b << endl;
	cout << "Difference: " << a << '-' << b << '=' << a-b << endl;
	cout << "Quotient: " << a << '*' << b << '=' << a*b << endl;
	cout << "Product: " << a << '/' << b << '=' << a/b << endl;
	cout << "Remainder: " << a << '%' << b << '=' << a % b << endl;
	
	return 0;
}
