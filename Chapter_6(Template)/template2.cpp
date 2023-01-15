#include<iostream>
using namespace std;

template<class T1, class T2>

class test{
	T1 a;
	T2 b;
	
	public:
		void get_data()
		{
			cout<<"a: ";cin>>a;
			cout<<"b: ";cin>>b;
		}
		void show()
		{
			cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
		}
};

int main()
{
	test<int, float> t1;
	test<int, char> t2;
	t1.get_data();
	t2.get_data();
	t1.show();
	t2.show();
	return 0;
}
