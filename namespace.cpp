#include<iostream>
using namespace std;

namespace user
{
    int x= 12;
}

int main()
{
    int x=20;
    cout<<"value of x inside main() function: "<<x<<endl;  // 'endl' changes line
    cout<<"value of x inside user namespace: "<<user::x; // :: is scope resolution operator

    return 0;
}