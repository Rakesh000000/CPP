#include<iostream>
using namespace std;
class base1{
    public:
    base1(){
        cout<<"Base 1 execution"<<endl;
    }
};
class base2{
    public:
    base2(){
        cout<<"Base 2 execution"<<endl;
    }
};
class derived: public base1, public base2{
    public:
    derived(): base1(),base2(){
        cout<<"Derived execution"<<endl;
    }
};
int main(){
    derived d1;
    return 0;
}