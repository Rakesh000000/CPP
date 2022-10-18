#include <iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void get(){
			cout<<"Enter value of a:";
			cin>>a;
		}
		friend class B;
};
class B{
	private:
		int b;
	public:
		void get(){
			cout<<"Enter value of b: ";
			cin>>b;
		}
		void sum(A x, B y)
		{
			cout<<"sum ="<<(x.a + y.b);
		}
};
int main(){
	A a;
	a.get();
	B b;
	b.get();
	b.sum(a, b);
	return 0;
}
