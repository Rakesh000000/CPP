#include <iostream>
using namespace std;
class sample{
	private:
		int x;
	public:
		sample (int a =0){
			x=a;
		}
		sample operator ++(){
			return sample(++x);
		}
		sample operator ++(int){
			return sample(x++);
		}
		void display(){
			cout<<"X value: "<<x<<endl;
		}
};
int main(){
	sample s1;
	s1.display();
	s1++;
	s1.display();
	++s1;
	s1.display();
	return 0;
}
