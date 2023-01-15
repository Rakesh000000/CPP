#include<iostream>
using namespace std;

template <class T>

class test{
	T a,b;
	
	public:
		void get_data()
		{
			cout<<"Enter data:"; cin>>a>>b;
		}
		
		void show()
		{
			cout<<"a= "<<a<<"b= "<<b<<endl;
		}
};

int main()
{
	test<int> t1;
	t1.get_data();
	t1.show();
	test<float> t2;
	t2.get_data();
	t2.show();
	test<char> t3;
	t3.get_data();
	t3.show();
	return 0;
}
