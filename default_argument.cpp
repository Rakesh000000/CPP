#include<iostream>
using namespace std;

int main()
{
	int divide(int a, int b=2);
	cout<<divide(4,2)<<endl;
	cout<<divide(8);
	return 0;
}

int divide(int x, int y)
{
	return x/2;
}
