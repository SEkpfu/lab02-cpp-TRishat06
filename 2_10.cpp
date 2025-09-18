#include <iostream>
using namespace std;
 
int main() {
    double x, y, z;
    cout << "x, y, z: ";
    cin >> x >> y >> z;
    
    if (x + y > z && x + z > y && y + z > x) {
        cout << "sushestvuet" << endl;
        
        if (x == y && y == z) {
            cout << "ravnostoron" << endl;
        } else if (x == y || x == z || y == z) {
            cout << "ravnobodren" << endl;
        }
        
        if (x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x) {
            cout << "pryamougol" << endl;
        }
    } else {
        cout << "ne sushestvuet" << endl;
    }
    
    return 0;
}