#include <iostream>
using namespace std;
class parent{
    private:
    int a;
    public:
    parent(){a=0;}
    virtual void display(){
        cout<<"Value of a= "<<a<<endl;
    }
};
class child1: public parent{
    int a;
    public:
    child1(){
        a=2;
    }
    void display(){
        cout<<"Value of a="<<a<<endl;
    }
};
class child2: public parent{
    int a;
    public:
    child2(){
        a=3;
    }
    void display(){
        cout<<"Value of a= "<<a<<endl;
    }

};
int main(){
    parent *baseptr;
    parent p;
    baseptr = &p;
    baseptr->display();
    child1 c1;
    baseptr = &c1;
    baseptr->display();
    child2 c2;
    baseptr = &c2;
    baseptr->display();
    return 0;
}