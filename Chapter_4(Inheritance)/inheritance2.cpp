#include<iostream>
using namespace std;

class base{
	public:
		base(){cout<<"constructor of base"<<endl;}
		~base(){cout<<"destructor of base"<<endl;}
};

class derived: public base{
	public:
		derived(){cout<<"constructor of derived class"<<endl;}
		~derived(){cout<<"destructor of derived class"<<endl;}
};

int main()
{
	derived d;
	return 0;
}
