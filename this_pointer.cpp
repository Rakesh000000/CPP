#include <iostream>
using namespace std;
class test{
    int a;
    public:
    void getdata(int x){
        cout<<"address of getdata function of this object is: "<<this<<endl;
        a=x;}
    void showdata(){
        cout<<"Value of a= "<<a<<endl;
        cout<<"Address of showdata function of this object is: "<<this<<endl;
    }
};
int main(){
    test obj1,obj2;
    obj1.getdata(20);
    obj1.showdata();
    obj2.getdata(10);
    obj2.showdata();
    return 0;
}