#include <iostream>
using namespace std;


class complex{
    private:
    int r;
    float im;

    public:
    complex(){
        r=0;
        im= 0;
    }
    complex(int a, float b){
        r=a;
        im=b;
    }
    complex add(complex c2){
        r = r + c2.r;
        im = im + c2.im;
        return *this;
    }

    void show(){
        cout<<r<<" + "<<im<<"i"<<endl;
    }
};

int main(){
    complex c1(10,20.5),c2(10 , 10.2);
    complex c3;
    c3 = c1.add(c2);
    c3.show();
    return 0;
}