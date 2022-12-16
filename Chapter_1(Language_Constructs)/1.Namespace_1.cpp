#include <iostream>
using namespace std;
namespace first
{
	int x=15;
	int val(){return x;}
}
namespace second
{
	int x=5;
	int val(){return x;}
}
main()
{
	using namespace first;
	cout<<"X from first:"<<x<<" Val from first:"<<val()<<endl;
	cout<<endl<<"X from second:"<<second::x<<" Val from second:"<<second::val()<<endl;
	return 0;
}
