#include<iostream>
using namespace std;

template<class T>

void Average(T *x, int n)
{
	T sum = 0;
	for(int i=0; i<n;i++)
	{
		sum += *(x+i);
	}
	T avg = sum/n;
	cout<<"Average is : "<<avg<<endl;
}

int main()
{
	int n;
	float *a;
	a= new float [n];
	cout<<"Enter number of element: "; cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Element "<<i+1<<":"; cin>>a[i];
	}
	Average<float>(a,n);
	return 0;
}
