#include <iostream>
using namespace std;
class rectangle
{
	private:
		double length, width;
		
	public:
		static int objectcount;
		rectangle(double l=2.0, double w=2.0)
		{
			length= l;
			width= w;
			objectcount++;
		}
		static int getcount()
		{
			return objectcount;
		}
};
int rectangle::objectcount=0;
int main()
{
	cout<<"Initial count: "<<rectangle::getcount()<<endl;
	rectangle r1(1.0,1.5);
	rectangle r2(2.0,3.0);
	cout<<"final count: "<<rectangle::getcount()<<endl;
	return 0;
}
