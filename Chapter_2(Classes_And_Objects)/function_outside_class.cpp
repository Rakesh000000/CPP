#include <iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[20];
		char phone[10];
	
	public:
		void getdata();
		void showdata();
};

void student::getdata()
{
	cout<<endl<<"Enter Name: ";
	fflush(stdin);
	cin.getline(name,20);
	cout<<"Roll no: ";
	cin>>roll;
	cout<<"Phone no: ";
	fflush(stdin);
	cin.getline(phone,10);
}
void student::showdata()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Roll no: "<<roll<<endl;
	cout<<"Phone no: "<<phone<<endl; 
}
int main()
{
	student s1,s2;
	cout<<"Enter first student data:"<<endl;
	s1.getdata();
	cout<<"Enter second student data:"<<endl;
	s2.getdata();
	cout<<endl<<"STUDENT DATA"<<endl;
	cout<<"student 1:"<<endl;
	s1.showdata();
	cout<<"student 2:"<<endl;
	s2.showdata();
	return 0;
}
