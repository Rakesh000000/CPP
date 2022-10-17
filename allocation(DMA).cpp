#include <iostream>
//#include <new>
using namespace std;
int main()
{
	int i,n;
	int * p;
	cout<<"Number of inputs : ";
	cin>>i;
	p = new (nothrow) int[i];
	
	if (p == nullptr)
		cout<<"memory not allocated";
	else
	{
		for (n=0;n<i;n++)
		{
			cout<<"Enter value "<<n+1<<":"<<endl;
			cin>>p[n];
		}
	}
	cout<<"You entered :";
	for (n=0;n<i;n++)
	{
		cout<<p[n]<<" ";
	}
	delete[] p;
	return 0;
}

