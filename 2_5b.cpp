#include <iostream>
using namespace std;
 
int main() {
    double X, Y, Z, a, b;
    
    cout << "X, Y, Z: ";
    cin >> X >> Y >> Z;
    cout << "a , b: ";
    cin >> a >> b;
    double smallest, middle;
    if (X <= Y && X <= Z) {
        smallest = X;
        if (Y <= Z) {
            middle = Y;
        } else {
            middle = Z;
        }
    } else if (Y <= X && Y <= Z) {
        smallest = Y;
        if (X <= Z) {
            middle = X;
        } else {
            middle = Z;
        }
    } else {
        smallest = Z;
        if (X <= Y) {
            middle = X;
        } else {
            middle = Y;
        }
    }
    double min, max;
    if (a <= b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
    if (smallest <= min && middle <= max) {
        cout << "prohodit" << endl;
    } else {
        cout << "ne prohodit" << endl;
    }
    
    return 0;
}