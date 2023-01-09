#include <iostream>
using namespace std;
class test{
	int id;
	public:
		test(int a=10){id=a;}
//		test(int a){id=a;}
		test(test &a){id= a.id;}
		int display(){
			return id;
		}
};
int main(){
	test t1;
	test t2(20);
	test t3={t2};
	test t4{t1};
	cout<<"T1: "<<t1.display()<<endl<<"T2: "<<t2.display()<<endl<<"T3: "<<t3.display()<<endl;
	cout<<"T4: "<<t4.display();
	return 0;
}
