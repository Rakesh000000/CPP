#include <iostream>
using namespace std;
int max(int, int);
float max(float, float);
char max(char, char);
main()
{
	int i1=20, i2=10;
	float f1=4.8,f2=4.1;
	char c1='a',c2='b';
	cout<<"Greater int is:"<<max(i1,i2)<<endl;
	cout<<"Greater float is:"<<max(f1,f2)<<endl;
	cout<<"Greater char is:"<<max(c1,c2)<<endl;
	return 0;
}
int max(int a, int b)
{
	return (a>b?a:b);
}
float max(float a,float b)
{
	return(a>b?a:b);
}
char max(char a,char b)
{
	return(a>b?a:b);
}
