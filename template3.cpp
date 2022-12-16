#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y)
{
	T temp=x;
	x=y;
	y=temp;
}

void func(int m, int n, float a, float b)
{
	cout<<m<<" "<<n<<endl;
	Swap(m,n);
	cout<<m<<" "<<n<<endl;
	
}

int main()
{
	func(2,3,2.2,3.3);
	return 0;
}
