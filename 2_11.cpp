#include <iostream>
using namespace std;
 
int main() {
    int birth_day, birth_month, birth_year;
    int now_day, now_month, now_year;
    
    cout << "data birth: ";
    cin >> birth_day >> birth_month >> birth_year;
    cout << "data now: ";
    cin >> now_day >> now_month >> now_year;
    
    int age = now_year - birth_year;
    
    if (now_month < birth_month || (now_month == birth_month && now_day < birth_day)) {
        age-=1;
    }
    
    cout << "vam " << age;
    
    if (age % 10 == 1 && age % 100 != 11) {
        cout << " god";
    } else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
        cout << " goda";
    } else {
        cout << " let";
    }
    
    return 0;
}