#include <iostream>
using namespace std;
class Base{
    int x;
    public:
    Base()
    {
        cout<<"No argument constructor base";  //here the base constructor executes first and derived constructor is executed later
    }
};
class derived:public Base     //deriving base class publically
{
    public:
    void show(){
        cout<<"Get outt";
    }
};
int main(){
    derived d1;
    return 0;
}