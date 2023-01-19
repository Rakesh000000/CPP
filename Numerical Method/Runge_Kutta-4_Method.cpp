#include<iostream>
#define f(x,y) ((2*y)/x)
using namespace std;

int main(){
    float n,h,m1,m2,m3,m4,m,x1,y1,x0,y0,xp;
    cout<<"x0: ";cin>>x0;
    cout<<"y0: ";cin>>y0;
    cout<<"step-size(h): ";cin>>h;
    cout<<"xp: ";cin>>xp;
    n = (xp - x0)/h;
    for(int i=1; i<=n; i++){
        m1=f(x0,y0);
        m2=f((x0+(h/2)), (y0+(m1*(h/2))));
        m3=f((x0+(h/2)),(y0+(m2*(h/2))));
        m4=f((x0+h),(y0+(m3*h)));
        m=(m1+2*m2+2*m3+m4)/6;
        y1 = y0 +m*h;
        x1 = x0+h;
        x0 = x1;
        y0 = y1;
    }
    cout<<"Functional value of xp is: "<<y0;
    return 0;
}