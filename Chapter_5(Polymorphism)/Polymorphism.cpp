// virtual function
#include<iostream>
using namespace std;

class base{
	public:
			virtual void show()
			{
				cout<<"base class function"<<endl;
			}
};

class d1: public base{
	public:
		void show()
			{
				cout<<"1st derived class function"<<endl;
			}
};

class d2: public base{
	public:
		void show()
			{
				cout<<"2nd derived class function"<<endl;
			}
};

int main()
{
	base *p;
	base B;
	d1 D1;
	d2 D2;
	p = &B;
	p->show();
	p = &D1;
	p->show();
	p= &D2;
	p->show();
	return 0;
}
