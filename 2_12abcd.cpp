#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cout << "a, b ,c: ";
    cin >> a >> b >> c;
    
    // a)
    int sum = 0;
    if (a > 10) sum += a;
    if (b > 10) sum += b;
    if (c > 10) sum += c;
    cout << "sum> 10: " << sum << endl;
    
    // b)
    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    cout << "count: " << count << endl;
    
    // c)
    int middle = a;
    if ((a >= b && a <= c) || (a >= c && a <= b)) middle = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a)) middle = b;
    else middle = c;
    cout << "middle: " << middle << endl;
    
    // d)
    int min_num = 1;
    if (b < a && b < c) min_num = 2;
    else if (c < a && c < b) min_num = 3;
    cout << "min_number: " << min_num << endl;
    
    return 0;
}
