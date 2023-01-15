#include <iostream>
using namespace std;


class parent{
    protected: int basedata=10;

};


class child1 : virtual public parent{}; // use of virtual base class
class child2: virtual public parent{}; //use of virtual base class


class grandchild: public child1, public child2{

    public:
    grandchild(){cout<<"Basedata = "<<basedata;}

};


int main(){
    grandchild g1;
    return 0;
}
