#include <iostream>
using namespace std;
class rectangle{
	int width, height;
	public:
		rectangle(int x,int y) : width(x), height(y){
		}
		int area(){return width*height;
		}
};

int main(){
	rectangle r1{3,5};
	rectangle *ptr1,*ptr2,*ptr3;
	ptr1 = &r1;
	ptr2= new rectangle{1,2};
	ptr3= new rectangle[2] { {2,3}, {3,4}};
	cout<<"area of first rectangle: "<<r1.area()<<endl;
	cout<<"area of second rectangle: "<<ptr2->area()<<endl;
	cout<<"area of third[0] rectangle: "<<ptr3[0].area()<<endl;
	cout<<"area of third[1] rectangle: "<<ptr3[1].area()<<endl;
	delete ptr2;
	delete[] ptr3;
	return 0;
}
