#include<iostream>
#define PI 3.141529
using namespace std;
class Radian{
    private:
    float rad;
    public:
    Radian(){
        rad=0;
    }
    Radian(float r){
        rad= r;
    }
    void show(){
        cout<<"Radian= "<<rad;
    }
};
class Degree{
    private:
    float deg;
    public:
    Degree(){
        deg= 0.0;
    }
    Degree(float d){
        deg=d;
    }
    operator Radian(){
        float radian;
        radian= deg * PI/180.0;
        return Radian(radian);
    }
    void input(){
        cout<<"Enter degree: ";
        cin>>deg;
    }
    void show(){
        cout<<"Degree= "<<deg;
    }

};
int main(){
    Radian r1;
    Degree d1;
    d1.input();
    r1 = d1;
    d1.show();
    cout<<endl;
    r1.show();
    return 0;
}