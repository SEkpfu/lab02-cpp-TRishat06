#include <iostream>
using namespace std;
 
void AnimalYear ( int  year ) {
    int position = (year - 2020) % 12;
    if (position < 0) position += 12;
    switch (position) {
        case 0: cout << "krisi"; break;
        case 1: cout << "korovi"; break;
        case 2: cout << "tigra"; break;
        case 3: cout << "zaica"; break;
        case 4: cout << "drakona"; break;
        case 5: cout << "zmei"; break;
        case 6: cout << "loshadi"; break;
        case 7: cout << "ovci"; break;
        case 8: cout << "obezyani"; break;
        case 9: cout << "kurici"; break;
        case 10: cout << "sobaki"; break;
        case 11: cout << "svini"; break;
    }
}
 
int main() {
    int year;
    cout << "year: ";
    cin >> year;
    
    AnimalYear(year);
    return 0;
}