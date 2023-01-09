#include <iostream>
using namespace std;
class length{
	private:
		int m,cm;
	public:
		length(){
			m=0;
			cm=0;
		}
		length(int a, int b){
			m=a; cm=b;
		}
		operator float(){
			float l;
			l= m+ cm/100.0;
			return l;
		}
		void show(){
			cout<<m<<"m "<<cm<<"cm"<<endl;
		}
};
int main(){
	length l1(10,20);
	float l2;
	l2=l1;
	l1.show();
	cout<<l2;
	return 0;
}
