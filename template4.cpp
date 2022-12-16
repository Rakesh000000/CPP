#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y) //dont write swap because it is another function defined in iostream header
{
	T temp = x;
	x=y;
	y=temp;
}

void func(int a, int b,float c, float d)
{
	cout<<"Before swap: "<<a<<b<<endl;
	swap(a,b);
	cout<<"After swap: "<<a<<b<<endl;
}

int main()
{
	func(2,3,4.5,5.5);
	return 0;
}
