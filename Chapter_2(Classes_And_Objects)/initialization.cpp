#include <iostream>
using namespace std;
class circle{
	double radius;
	public:
		circle(double r){
			radius=r;
		}
		 double circumf(){
			return 2*radius*3.14159265;
		}
};
int main(){
	circle c1(10.0);
	circle c2= 20.0;
	circle c3 {30.0};
	circle c4={40.0};
	cout<<"First circumference ="<<c1.circumf()<<endl;
	cout<<"Second circumference ="<<c2.circumf()<<endl;
	cout<<"Third circumference ="<<c3.circumf()<<endl;
	cout<<"Fourth circumference ="<<c4.circumf()<<endl;
	return 0;
}
