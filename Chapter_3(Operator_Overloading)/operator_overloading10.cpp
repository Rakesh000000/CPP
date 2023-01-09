#include <iostream>
#include <cstring>
using namespace std;
class String{
	char str[100];
	public:
	String(){
		strcpy(str,"");
	}
	String(char mychar[]){
		strcpy(str,mychar);
	}
	void display(){
		cout<<"String is: "<<str<<endl;
	}
	String operator +(String s1){
		String s2;
		strcpy(s2.str,str);
		strcat(s2.str, s1.str);
		return s2;
	}
};
int main(){
	String s1="Temperature";
	String s2="Gradient";
	String s3;
	s3 = s1 + s2;
	s3.display();
	return 0;
	
}
