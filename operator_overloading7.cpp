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
		point operator +(point p2){
			point sum;
			sum.x = x + p2.x;
			sum.y = y + p2.y;
			return sum;
		}
};
int main(){
	point p1,p2;
	cout<<"First point: "<<endl;
	p1.get();
	cout<<"Second point: "<<endl;
	p2.get();
	point p3;
	p3 = p1+p2;
	cout<<"Sum is: ";
	p3.display();
	return 0;
}
