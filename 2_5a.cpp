#include <iostream>
using namespace std;
 
int main() {
    double r, a, b, z, c;
    
    cout << "r torta:";
    cin >> r;
    cout << "a , b: ";
    cin >> a >> b;
    cout << "visota torta: ";
    cin >> z;
    cout << "visota korobki: ";
    cin >> c;
    
    if (2*r <= a && 2*r <= b) {
        cout << "pomestilcya" << endl;
    } else {
        cout << "ne pomestilsya" << endl;
    }
    
    if (z <= c) {
        cout << "pomestilsya" << endl;
    } else {
        cout << "ne pomestilsya" << endl;
    }
    
    return 0;
}