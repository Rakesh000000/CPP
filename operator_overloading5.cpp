#include <iostream>
using namespace std;
class point{
	int x, y;
	public:
		point(){}
		point(int a,int b){
			x=a; y=b;
		}
		void get(){
			cout<<"X coordinate: "; cin>>x;
			cout<<"Y coordinate: "; cin>>y;
		}
		point sum(point p2){
			point sum;
			sum.x = x + p2.x;
			sum.y = y + p2.y;
			return sum;
		}
		void display(){
			cout<<"(x,y) = ("<<x<<","<<y<<")"<<endl;
		}
};
int main(){
	point p1,p2;
	cout<<"First point: "<<endl;
	p1.get();
	cout<<endl;
	cout<<"Second point: "<<endl;
	p2.get();
	cout<<endl;
	point p3;
	p3 = p1.sum(p2);
	cout<<"The sum is :";
	p3.display();
	return 0;
}
