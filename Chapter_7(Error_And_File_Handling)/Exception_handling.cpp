#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

using namespace std;


double sqroot(double num){
    if (num<0){throw num;}
    else
    return sqrt(num);
}

int main(){
    double n,r;
    
    try{
        cout<<"Enter a number: ";
        cin>>n;
        r = sqroot(n);
    }
    catch(double nm){
        cout<<"Error ! negative number "<<nm<<" cannot find root."<<endl;
        getch();
        exit(0);
    }
    
    cout<<"Square root of "<<n<<" is :"<<r<<endl;
}