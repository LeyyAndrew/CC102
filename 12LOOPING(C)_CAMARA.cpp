#include <iostream>
using namespace std;

int main() {
    int rows = 8; 

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << "  "; 
        }
        for (int l = 0; l < i; l++) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
