#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int x,y;
	cout<<"Value of x and y:";
	cin>>x;
	cin>>y;
	cout<<"the sum is: "<<sum(x,y)<<endl;
	return 0;
}
