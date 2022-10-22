#include <iostream>
using namespace std;
class base{
    int a;
    public:
    virtual void show() = 0;
};
class derived1: public base{
    int a;
    public:
    void show(){
        cout<<"This is derived 1"<<endl;
    }
};
class derived2: public base{
    public:
    void show(){
        cout<<"This is derived 2"<<endl;
    }
};
int main(){
    derived1 d1;
    derived2 d2;
    base *bptr;
    bptr = &d1;
    bptr->show();
    bptr = &d2;
    bptr->show();
    return 0;
}
