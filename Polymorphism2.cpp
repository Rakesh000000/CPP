// pure vitrual function and abstract class
#include<iostream>
using namespace std;

class base{
	public:
		virtual void show() = 0; //pure virtual function
		
		void hello()
		{
			cout<<"Hello from base"<<endl;
		}
};

class derived1: public base{
	public:
		void show()
		{
			cout<<"Derived 1"<<endl;
		}
};

class derived2: public base{
	public:
		void show()
		{
			cout<<"Derived 2"<<endl;
		}
};

int main()
{
//	base b; is not allowed because base class is astract due to presence of pure virtual function
	base *p;
	p->hello(); //we can access base member functions using pointer of base class
	derived1 d1;
	derived2 d2;
	p = &d1;
	p->show();
	p = &d2;
	p->show();
	return 0;
}
