#include<iostream>
#define PI 3.1415
using namespace std;
class degree{
    private:
    float deg;
    public:
    degree(){
        deg= 0;
    }
    void getdeg(){
        cout<<"Enter degree value: ";
        cin>>deg;
    }
    float getdegree(){
        return deg;
    }
    void showdeg(){
        cout<<"Degree= "<<deg;
    }
};
class radian{
    private:
    float rad;
    public:
    radian(){
        rad=0;
    }
    radian(float r){
        rad=r;
    }
    radian (degree d){
        rad= d.getdegree()* PI/180.0;
    }
    void show(){
        cout<<"Radian = "<<rad;
    }
};
int main(){
    degree d1;
    radian r1;
    d1.getdeg();
    r1= d1;
    d1.showdeg();
    cout<<endl;
    r1.show();
    return 0;
}