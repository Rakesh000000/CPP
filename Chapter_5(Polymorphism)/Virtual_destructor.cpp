#include <iostream>
using namespace std;
class base{
    public:
    virtual ~base(){
        cout<<"Base destroyed"<<endl;
    }
};
class derv1: public base{
    public:
    ~derv1(){
        cout<<"Derv1 destroyed"<<endl;
    }
};
class derv2: public base{
    public:
    ~derv2(){
        cout<<"Derv2 destroyed"<<endl;
    }
};
int main(){
    base *bptr =  new derv1;
    delete bptr;
    return 0;
}