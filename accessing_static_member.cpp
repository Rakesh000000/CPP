#include <iostream>
using namespace std;
class info{
	private:
		static int private_var;
	public:
		static int public_var;
};
int info::private_var=100;
int info::public_var=0;
int main(){
	cout<<"Public var initially= "<<info::public_var<<endl;
	info::public_var=120;
	cout<<"new public var= "<<info::public_var<<endl;
	return 0;
}
