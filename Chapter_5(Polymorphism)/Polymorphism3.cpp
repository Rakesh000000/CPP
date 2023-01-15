// virtual base class
#include<iostream>
using namespace std;

class base{
	public: 
	void display_base()
	{
		cout<<"This is base class"<<endl;
	}
};

class alevel1: virtual public base{  //vitually inheriting base class
	public:
		void display_derived1()
		{
			cout<<"Level 1 derived class a"<<endl;
		}
};

class blevel1: virtual public base{  //virtually inheriting base class 
	public:
		void display_derived1()
		{
			cout<<"Level 1 derived class b"<<endl;
		}
};

class level2: public alevel1, blevel1{  //inheriting alevel1 and blevel1
	public:
		void display()
		{
			display_base();    //function of base class can be accessed without any ambiguity because we virtually inherited base class in both level1 derived classes
			alevel1::display_derived1();
			blevel1::display_derived1();
			cout<<"Level 2 derived class"<<endl;
		}
};

int main()
{
	level2 L;
	L.display();
	return 0;
}
