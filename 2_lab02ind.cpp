#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double x, n;
    const double pi = acos(-1.0);
    
    cout << "x: ";
    cin >> x;
    
    if (x > 5) {
        n = cos(pi/2 + pi*x);
    }
    else if (x > 2) {
        n = 0.5 + x*x*x;
    }
    else {
        n = 2.0/(x - 3) + sqrt(x + 1);
    }
    
    cout << "n = " << n << endl;
    return 0;
}