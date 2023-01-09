#include <iostream>
using namespace std;
class rectangle{
	int width, height;
	public:
		rectangle(int, int);
		int area(){
			return width*height;
		}
};

rectangle::rectangle(int a, int b){
	width= a;
	height= b;
}
int main(){
	rectangle recta (3,4);
	rectangle rectb (2,3);
	cout<<"First area: "<<recta.area()<<endl;
	cout<<"Second area: "<<rectb.area()<<endl;
	return 0;
}

