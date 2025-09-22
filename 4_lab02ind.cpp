#include <iostream>
using namespace std;
 
int main() {
    int number;
    cout << "kolvo stuliev: ";
    cin >> number;
    
    cout << "on sel na " << number << " stul";
    int lastDigit = number % 10;
    int lastTwoDigits = number % 100;
    if (lastTwoDigits >= 11 && lastTwoDigits <= 14) {
        cout << "ev";
    }
    else {
        switch (lastDigit) {
            case 1:break;
            case 2:
            case 3:
            case 4: cout << "a"; break;
            default: cout << "ev"; break;
        }
    }
    
    cout << endl;
    return 0;
}