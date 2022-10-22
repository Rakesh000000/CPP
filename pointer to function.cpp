#include <stdio.h>
#include <iostream>
using namespace std;
int square(int n)
{
	return n*n;
}
int main()
{
	int x;
	int (*fptr)(int);
	fptr = &square;
	cout<<"Enter number to be squared:";
	cin>>x;
	int sq;
	sq = (*fptr)(x);
	cout<<"Square is:"<<sq<<endl;
	return 0;
}
