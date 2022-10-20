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
		length(float len){
			m = int(len);
			cm = (len-m)*100;
		}
		void show(){
			cout<<m<<"M "<<cm<<"Cm"<<endl;
		}
};
int main(){
	length l1,l2(12.22);
	float f;
	f= 22.22;
	length l3;
	l3=f;
	l3.show();
	l1.show();
	l2.show();
	return 0;
}
