#include <iostream>
using namespace std;
class money{
	private:
		int rs; float  ps;
	
	public:
		money(int r=0, float p=0){
			rs= r; ps=p;
		}
		void showmoney(){
			cout<<rs<<"Rs. "<<ps<<"ps."<<endl;
		}
		bool operator >(money);
		
};
bool money::operator >(money m2){
	int m1 = rs + ps/100;
	float mm1= m2.rs + m2.ps/100;
	return (m1>mm1)?true:false;
}
int main(){
	money m1(20,25);
	money m2(50,20);
	cout<<"Money m1 ="; m1.showmoney();
	cout<<endl<<"Money m2 ="; m2.showmoney();
	money m3;
	if (m2>m1)
	m3 = m2;
	else m3= m1;
	cout<<"Greater is : "; m3.showmoney();
	return 0;
}
