#include <iostream>
using namespace std;
class coordinate{
	private:
		int x, y;
	
	public:
		void read()
		{
			cout<<"X-coordinate: ";
			cin>>x;
			cout<<"Y-coordinate: ";
			cin>>y;
		}
		void print()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		void add(coordinate p1, coordinate p2)
		{
			x=p1.x+p2.x;
			y=p1.y+p2.y;
		}
};

int main()
{
	coordinate p1,p2,p3;
	cout<<"Enter coordinates of first point p1: "<<endl;
	p1.read();
	cout<<"Enter coordinates of second point p2: "<<endl;
	p2.read();
	cout<<"First point: ";
	p1.print();
	cout<<"second point: ";
	p2.print();
	cout<<"Sum: ";
	p3.add(p1,p2);
	p3.print();
	return 0;
}
