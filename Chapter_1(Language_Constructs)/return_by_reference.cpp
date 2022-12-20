#include <iostream>
using namespace std;
int x=5,y=15;
int &setx();
main()
{
	setx()=y;
	cout<<"from main, x= "<<x<<endl;
	return 0;
}
int &setx()
{
	cout<<"From function, x= "<<x<<endl;
	return x;
}
