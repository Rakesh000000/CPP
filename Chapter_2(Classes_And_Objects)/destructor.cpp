#include <iostream>
using namespace std;
class sample{
	private:
		int a;
	public:
		sample(){
			cout<<endl<<"Executed succesfully";
		}
		~sample(){
			cout<<endl<<"Destroyed succesfully";
		}
};
int main(){
	cout<<"press any key:";
	cin.get();
	sample s1;
	cout<<"Press any key:";
	cin.get();
	return 0;
}
