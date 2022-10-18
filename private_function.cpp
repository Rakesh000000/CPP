#include <iostream>
using namespace std;
class sample{
	private:
		int m;
		void read(){
			cout<<"Enter value for m: ";
			cin>>m;
		}
	public:
		void display(){
			cout<<"Value of m: "<<m<<endl;
		}
		void update();
};

void sample::update(){
	read();
}

int main(){
	sample s1;
	cout<<"Existing data:"<<endl;
	s1.display();
	cout<<endl<<"enter new data:"<<endl;
	s1.update();
	cout<<endl<<"Existing data: "<<endl;
	s1.display();
	return 0;
}
