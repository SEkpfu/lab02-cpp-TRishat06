#include <iostream>
using namespace std;
 
int main() {
    double a, b;
    char operation;
    
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "vedite (+, -, *, /): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b != 0) {
                cout << a / b;
            } else {
                cout << "delenie na 0!";
            }
            break;
        default:
            cout << "neizvestno";
    }
    
    return 0;
}