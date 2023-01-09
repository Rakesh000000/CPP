#include <iostream>
using namespace std;
class weight{
	private:
		int kg;
	public:
		weight (int x=0){
			kg=x;
		}
		void display(){
			cout<<"The weight is: "<<kg<<endl;
		}
		weight operator ++(){
			weight temp;
			temp.kg = ++kg;
			return temp;
		}
		weight operator ++(int){
			weight temp;
			temp.kg = kg++;
			return temp;
		}
};
int main(){
	weight w1,w2;
	w2 = ++w1;
	w1.display();
	w2.display();
	return 0;
}
