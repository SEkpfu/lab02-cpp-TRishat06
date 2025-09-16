#include <iostream>
using namespace std;
 
int main() {
    int number;
    cout << "number: ";
    cin >> number;
    
    if (number > 0) {
        cout << "polozhitelnoe" << endl;
    } else if (number < 0) {
        cout << "otricatelnoe" << endl;
    } else {
        cout << "zero" << endl;
    }
    
    if (number != 0) {
        if (number % 2 == 0) {
            cout << "chetnoe" << endl;
        } else {
            cout << "nechetnoe" << endl;
        }
    }
    
    return 0;
}