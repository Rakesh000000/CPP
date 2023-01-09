#include <iostream>
using namespace std;
class sample{
	private:
		int x;
	public:
		sample(int a=0){
			x=a;
		}
		int getvalue(){
			return x;
		}
		sample operator ++(){
			sample temp;
			temp.x = ++x;
			return temp;
		}
		sample operator ++(int){
			sample temp;
			temp.x= x++;
			return temp;
		}
};
int main(){
	sample s1;
	sample s2(10);
	cout<<"Initial value  of s1: "<<s1.getvalue()<<endl;
	cout<<"Initial value  of s2: "<<s2.getvalue()<<endl;
	s1++;
	++s2;
	cout<<"Final value of s2: "<<s2.getvalue()<<endl;
	sample s3;
	s3= ++s2;
	cout<<"Final value  of s1: "<<s1.getvalue()<<endl;
	cout<<"Final value of s3: "<<s3.getvalue()<<endl;
	return 0;
}

