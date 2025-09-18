#include <iostream>
using namespace std;
 
int main() {
    setlocale(0, "");
    int dM, dN;
    
    cout << "vedite datu" << endl;
    cout << "den mecyaca ";
    cin >> dM;
    cout << "nomer dnya ";
    cin >> dN;
    
    if (dM == 13 && dN == 5) {
        cout << "bad day" << endl;
    }
    else if (dM == 13 && dN == 2) {
        cout << "bad day" << endl;
    }
    else if (dM == 17 && dN == 5) {
        cout << "bad day" << endl;
    }
    
    return 0;
}