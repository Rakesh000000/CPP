#include <iostream>
using namespace std;
class base{
    protected: int x;
    public:
    base(int a){x=a;}
};
class derived: public base{
    int y;
    public:
    derived(int a, int b):base(a){
        y=b;
    }
    void show(){
        cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
    }
};
int main(){
    derived d1(20,30);
    d1.show();
    return 0;
}