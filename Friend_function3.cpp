#include<iostream>
using namespace std;
class B;
class A{
	private:
		int x;
		
	public:
		A ()
		{
			x = 0;
		}
		A (int a)
		{
			x = a;
		}
		void show()
		{
			cout<<"value of a: "<<x<<endl;
		}
		
		friend void data(A);
};

class B{
	private:
		int y;
		
	public:
		B(){
			y = 0;
		}
		B(int a)
		{
			y=a;
		}
		void data(A);
};
void B::data(A b)
{
	cout<<"y = "<<y<<endl;
	cout<<"x = "<<b.x<<endl;
}

int main()
{
	A a(10);
	B b(20);
	data(a);
	return 0;
}
