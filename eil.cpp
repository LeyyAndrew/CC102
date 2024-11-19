#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age, ticket = 1;
    char Parent, when;
    double timeOp;
    string MovieOp;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0){
        cout << "Invalid input.\n";
    } else {
        if (age < 13) {
            cout << "Are you with a parent? (y/n): ";
            cin >> Parent;
            if (Parent == 'y' || Parent == 'Y') {
                MovieOp = "G or PG";
                ticket = 2;
            } else if (Parent == 'n' || Parent == 'N') {
                MovieOp = "G";
            } else {
                MovieOp = "Invalid input.";
            }
        } else if (age >= 13 && age < 16) {  
            cout << "Are you with a parent? (y/n): ";
            cin >> Parent;
            if (Parent == 'y' || Parent == 'Y') {
                MovieOp = "G, PG, or R";
                ticket = 2;
            } else if (Parent == 'n' || Parent == 'N') {
                MovieOp = "G or PG";  
            } else {
                MovieOp = "Invalid input.";
            }
        } else if (age >= 16) {
            MovieOp = "G, PG, or R";
        }
        cout << "Matinee or Evening? (m/e): ";
        cin >> when;
        if (when == 'm' || when == 'M') {
            timeOp = 7.50;
        } else if (when == 'e' || when == 'E') {
            timeOp = 10.50;
        } else {
            cout << "Invalid Input" << endl;
        }
        int PriceUsd = timeOp * ticket;
        cout << MovieOp << endl;
        cout << "Price $" << PriceUsd << endl;
    }
   
    return 0;
}
