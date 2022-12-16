#include<iostream>
using namespace std;

class Coordinate{
	private:
		int x, y;
		
	public:
		Coordinate()
		{
			x= 0; y=0;
		}
		Coordinate(int a, int b)
		{
			x = a; y = b;
		}
		void show()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		Coordinate midpoint(Coordinate c1, Coordinate c2)
		{
			this->x = (c1.x + c2.x)/2;
			this->y = (c1.y + c2.y)/2;
			return *this;
		}
};


int main()
{
	Coordinate c1(2,2), c2(8,8), c3, c4;
	c4 = c3.midpoint(c1, c2);
	c4.show();
	return 0;
}

