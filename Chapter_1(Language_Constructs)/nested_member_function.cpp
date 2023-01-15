#include <iostream>
using namespace std;
class set{
	private:
		int n,m;
	public:
		void input();
		int largest();
		void display();
};

inline void set::input(){
	cout<<"Enter m:"; cin>>m;
	cout<<"Enter n:"; cin>>n;
}

inline int set::largest(){
	return (m>n)?m:n;
}

void set::display(){
	int l=largest();
	cout<<"largest is: "<<l<<endl;
}

int main(){
	set s1;
	cout<<"Welcome"<<endl;
	s1.input();
	s1.display();
	return 0;
}
