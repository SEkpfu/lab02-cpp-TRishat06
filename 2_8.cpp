#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double x, y;
    cout << "(x y): ";
    cin >> x >> y;
    
    double distance = sqrt(x*x + y*y);
    int points = 0;
    
    if (distance <= 2.0) {
        points = 10;
    } else if (distance <= 4.0) {
        points = 5;
    } else if (distance > 4.0) {
        points = 0;
    }
    
    cout << "points: " << points << endl;
    
    return 0;
}