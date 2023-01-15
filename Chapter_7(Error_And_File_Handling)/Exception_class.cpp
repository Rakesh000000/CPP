#include<iostream>
#include<math.h>
using namespace std;
class number{
    private: double num;
    public:
    class neg{};
    void readnumber(){
        cout<<"Enter a number: ";
        cin>>num;
    }
    double sqroot(){
        if(num<0){ throw neg();}

        else return sqrt(num);
    }
};

int main(){
    number n1;
    double root;
    n1.readnumber();
    try
    {
        cout<<"Finding root of number: "<<endl;
        root = n1.sqroot();
        cout<<"Square root of the given number is: "<<root<<endl;
        cout<<"Executed without error !!"<<endl;
    }
    catch (number::neg)
    {
        cout<<"Error !! square root of negative number is not possible.";
    }

    return 0;
}