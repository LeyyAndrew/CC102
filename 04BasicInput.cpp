#include <iostream>
using namespace std;

int main()
{
	string name,course,school;
	cout << "Nickname: ";
	cin >>name;
	cout << "Course-Year Level: ";
	cin >>course;
	cout << "School: ";
	cin >>school;
	
	cout << "Wow congrats " << name << "! " << course << " is a nice course. And you are studying in " << school << " which is one of the Center of Excellence in Tertiary Education." <<endl;
	return 0;
}