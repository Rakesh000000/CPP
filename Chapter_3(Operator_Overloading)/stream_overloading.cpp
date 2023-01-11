#include <iostream>
#include <string>
using namespace std;
class person{
	string name;
	int age;
	
	public:
		person(){
			name = "Noname";
			age= 20;
		}
		person(string n, int a){
			name=n; age=a;
		}
		
		friend ostream &operator <<(ostream &, person &);
		friend istream &operator >>(istream &, person &);
};
ostream &operator <<(ostream &output, person &n1){
	output<<"Name : "<<n1.name;
	output<<endl<<"Age : "<<n1.age;
	return output;
}
istream &operator >>(istream &input, person &n2){
	input>>n2.name;
	input>>n2.age;
	return input;
}
int main(){
	person p1,p2;
	cout<<"Enter name and age for p1: "<<endl;
	cin>>p1;
	cout<<"Enter name and age for p2: "<<endl;
	cin>>p2;
	cout<<endl<<"first person: "<<endl;
	cout<<p1<<endl;
	cout<<endl<<"second person: "<<endl;
	cout<<p2<<endl;
	return 0;
}
