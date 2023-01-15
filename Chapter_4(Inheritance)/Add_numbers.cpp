#include<iostream>
using namespace std;

class Numbers{
    protected:
    int a,b;

    public:
    void Set_data(){
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
};

class Add: public Numbers{
    public:
    
    void sum(){
        cout<<"Sum is: "<<a+b<<endl;
    }
};

int main(){
    Add obj1;
    obj1.Set_data();
    obj1.sum();
    return 0;
}