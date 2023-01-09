#include <iostream>
using namespace std;
class Time{
	int hr,min;
	public:

	Time(){ hr=0; min =0;}
		void gettime(){
			int premin, prehr;
			cout<<"Enter hr: ";
			cin>>prehr;
			cout<<"Enter min: ";
			cin>>premin;
			hr= prehr+(premin/60);
			min=(premin%60);
		}
		void puttime(){
			cout<<hr<<"hr"<<min<<"min";
		}
		void sum(Time,Time);
};

void Time::sum(Time t1,Time t2){
	int premin,prehr;
	premin=t1.min+t2.min;
	prehr=t1.hr+t2.hr;
	hr= prehr+(premin/60);
	min=(premin%60);
}

int main(){
	Time t1;
	Time t2;
	cout<<"Enter first time: "<<endl;
	t1.gettime();
	cout<<"Enter second time: "<<endl;
	t2.gettime();
	Time t3;
	t3.sum(t1,t2);
	t1.puttime(); cout<<" + "; t2.puttime(); cout<<" = ";
	t3.puttime();
	return 0;
}
