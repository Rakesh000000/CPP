#include<iostream>
using namespace std;

class base{
	int i;
	public:
		base()
		{
			cout<<"default constructor base"<<endl;
		}
		base(int a)
		{
			i = a;
			cout<<"parameterized constructor base"<<endl;
		}
		~base()
		{
			cout<<"destructor base"<<endl;
		}
};

class derived: public base{
	int a;
	public:
		derived(){
			cout<<"default constructor derived"<<endl;
		}
		derived(int b, int n): base(n)
		{
			a = b;
			cout<<"parameterized constructor derived"<<endl;
		}
		~derived()
		{
			cout<<"destructor derived"<<endl;
		}
};

int main()
{
	derived d(3,5);
	derived a;
	return 0;
}
