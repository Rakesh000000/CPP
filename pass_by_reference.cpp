#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
	int temp;
	temp=x;	x=y;	y=temp;
}
main()
{
	int a,b;
	cout<<"Value for a= ";
	cin>>a;
	cout<<"Value of b= ";
	cin>>b;
	cout<<"Before swap"<<endl<<"a= "<<a<<" b= "<<b<<endl;
	swap(a,b);
	cout<<"After swap"<<endl<<"a= "<<a<<" b= "<<b<<endl;
	return 0;
}
