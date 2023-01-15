#include<iostream>
using namespace std;
class one{
    protected:
    int count;
    public:
    one(){count=0;}
    void operator ++(int){
        count++;
    }
    void show(){
        cout<<"count= "<<count;
    }
};
class two: public one{
    public:
    void operator --(int){
        count--;
    }
};
int main(){
    two obj2;
    obj2.show();
    obj2++;
    obj2.show();
    obj2--;
    obj2.show();
    return 0;
}