#include<iostream>
#define f(x) ((x*x*x)+1)
using namespace std;

int main(){
    int n;
    float a ,b ,h ,x ,sum1=0 ,sum2=0 ,I;
    cout<<"Enter number of divisions: "; cin>>n;
    cout<<"Enter the range value(a,b): "; cin>>a>>b;
    h = (b-a)/n;
    for(int i=1; i<n; i++){
        x = a + (i*h);
        if(i % 2 == 0)
        sum1 += 2*f(x);
        else
        sum2 += 4*f(x);
    }
    I = (h/3)*(f(a) + f(b) + sum1 + sum2);
    cout<<"I ="<<I<<endl;
    return 0;
}