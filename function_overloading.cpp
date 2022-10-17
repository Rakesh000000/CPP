#include <iostream>
using namespace std;
void char_line();
void char_line(int n);
void char_line(char ch);
void char_line(char ch, int n);
main()
{
	char_line();
	cout<<endl;
	char_line(50);
	cout<<endl;
	char_line('*');
	cout<<endl;
	char_line('$', 50);
	cout<<endl;
	return 0;
}
void char_line()
{
	int i;
	for (i=0;i<50;i++)
	{
		cout<<"-";
	}
}
void char_line(int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout<<'*';
	}
}
void char_line(char ch)
{
	int i;
	for (i=0;i<50;i++)
	{
		cout<<ch;
	}
}
void char_line(char ch, int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout<<ch;
	}
}

