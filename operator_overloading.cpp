#include <iostream>
using namespace std;
class counter{
	private:
		unsigned int count;
	public:
		counter (int a=0){ count=a;}
		int getcount(){
			return count;
		}
		void operator ++(){count++;}
		void operator ++(int a){ count += a;}
};
int main()
{
	counter c1;
	counter c2(100);
	cout<<"Count 1 before increment: "<<c1.getcount()<<endl;
	cout<<"Count 2 before increment: "<<c2.getcount()<<endl;
	c1++;
	++c2;
	cout<<"Count 1 after increment: "<<c1.getcount()<<endl;
	cout<<"Count 2 after increment: "<<c2.getcount()<<endl;
	return 0;
}
