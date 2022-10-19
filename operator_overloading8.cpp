#include <iostream>
using namespace std;
class point{
	int x,y;
	public:
		void get(){
			cout<<"X coordinate: "; cin>>x;
			cout<<"Y coordinate: "; cin>>y;
		}
		void display(){
			cout<<"(x,y)= ("<<x<<","<<y<<")"<<endl;
		}
		friend point operator +(point, point);
};
point operator +(point p1, point p2){
	point sum;
	sum.x = p1.x + p2.x;
	sum.y = p1.y + p2.y;
	return sum;
}
int main(){
	point p1,p2;
	cout<<"First point: "<<endl;
	p1.get();
	cout<<"Second point: "<<endl;
	p2.get();
	point p3;
	p3 = p1 + p2;
	cout<<"The sum is: ";
	p3.display();
	return 0;
}
