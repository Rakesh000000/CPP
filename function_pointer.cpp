#include <iostream>
using namespace std;
long int compute(long int (*func)(int), int value)
{
	long int result;
	result= (*func) (value);
	return result;
}
long int square(int n)
{
	return n*n;
}
long int cube(int n)
{
	return n*n*n;
}
int main()
{
	int num1;
	char c;
	cout<<"Enter a number:";
	cin>>num1;
	
	cout<<"Operation:"<<endl<<"1.square(s)"<<endl<<"2.cube(c)"<<endl<<": ";
	cin>>c;
	
	int num2;
	if (c == 's' || c== 'S')
	num2= compute(square,num1);
	
	else if (c== 'c' || c== 'C')
	num2= compute(cube,num1);
	
	cout<<"Result is :"<<num2<<endl;
	return 0;
}
