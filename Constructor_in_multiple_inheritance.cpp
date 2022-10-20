#include<iostream>
using namespace std;
class base1{
    protected: int x;
    public:
    base1(int a){
        x=a;
        cout<<"Base 1 execution"<<endl;
    }
};
class base2{
    protected: int y;
    public:
    base2(int a){
        y=a;
        cout<<"Base 2 execution"<<endl;
    }
};
class derived: public base1, public base2{
    protected: int z;
    public:
    derived(int a, int b, int c):base1(a),base2(b){
        z=c;
        cout<<"Derived executed"<<endl;
    }
    void show(){
        cout<<"x= "<<x<<endl<<"y= "<<y<<endl<<"z= "<<z<<endl;
    }
};
int main(){
    derived d1(10,20,30);
    d1.show();
    return 0;
}