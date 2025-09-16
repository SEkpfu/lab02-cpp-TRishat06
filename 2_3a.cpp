#include <iostream>
using namespace std;
 
int main() {
    double x;
    cout << "x=";
    cin >> x;
    double result;
    if (x <= -2.0) {
        result = 0.0;
    } else if (x <= 10.0) {
        result = x*x + 4.0*x + 5.0;
    } else {
        result = 1.0/(x*x + 4.0*x - 5.0);
    } 
    cout << "f(x) = " << result << endl;
    return 0;
}