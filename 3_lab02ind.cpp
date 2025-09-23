#include <iostream>
#include <cmath>
using namespace  std;
int main(){
    double x, y, r;
    r=sqrt(x * x + y * y);
    cout<<"(x,y):";
    cin>>x>>y;
    if(x >= -4 && x <= -2 && r <= 4) {
        cout<<"prinadlezhit";
    }
    else if(x >= -2 && x <=0 && r <= 4 && y <= -4) {
        cout<<"prinadlezhit";
    }
    else if(x >=-4 && x <=4 && y <= x - 4) {
        cout<<"prinadlezhit";
    }
    else{
        cout<<"net";
    }
    return 0;
}