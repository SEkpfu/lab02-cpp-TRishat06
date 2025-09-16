#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // a)
    double x,y;
    cout<<"(x,y): ";
    cin>>x>>y;
    if((x>=-2.0 && x<=0.0) && (y<=1.0 && y>=0.0)){
    cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    // b)
    double distance=sqrt(x*x+y*y);
    if(y>=0 && x>=-5 && x<=5 && y<=5 && distance <=5){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
