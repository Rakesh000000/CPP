#include<iostream>
using namespace std;

void TOH(int, char, char, char);
int main(){
    int n;
    cout<<"Enter number of discs:";cin>>n;
    TOH(n, 'A','B','C');
    return 0;
}

void TOH(int n, char s, char i, char d){
    if (n == 1)
    cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl<<endl;

    else{
        TOH(n-1, s, d, i);
        cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl<<endl;
        TOH(n-1, i, s, d);
    }
}