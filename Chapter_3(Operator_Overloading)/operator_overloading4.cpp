#include <iostream>
using namespace std;
class time{
	private:
		int hr,min,sec;
	public:
		time (int h=0, int m=0, int s=0){
			hr =h; min=m; sec=s;
			min += sec/60;
			sec = sec%60;
			hr += min/60;
			min = min%60;
		}
		void showtime(){
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}
		time operator ++(int){
			time temp;
			temp.sec = sec++;
			return temp;
		}
};

int main(){
	time t1(10,20,30);
	t1.showtime();
	t1++;
	t1.showtime();
	return 0;
}
