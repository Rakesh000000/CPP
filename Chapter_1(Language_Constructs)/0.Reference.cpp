#include <iostream>
using namespace std;
int main()
{
	int x=5;
	int &y=x;
	cout<<"Value of x= "<<x<<" value of y= "<<y<<endl;
	y++;
	cout<<"Value of x= "<<x<<" Value of y= "<<y<<endl;
	return 0;
}
