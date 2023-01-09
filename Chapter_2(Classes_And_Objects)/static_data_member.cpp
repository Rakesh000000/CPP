#include <iostream>
using namespace std;
class static_data{
	private:
		static int count;
		int var;
		
	public:
		static_data(){
			count++;
			cout<<"Object #"<<count<<"created"<<endl;
		}
		int getcount(){
			return count;
		}
};
int static_data::count=0;
int main()
{
	static_data s1;
	cout<<"Count is: "<<s1.getcount()<<endl;
	static_data s2;
	cout<<"Count is: "<<s2.getcount()<<endl;
	return 0;
}
