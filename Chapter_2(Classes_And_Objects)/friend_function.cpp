#include <iostream>
using namespace std;
class time{
	private:
		int hrs, mins;
	public:
		void gettime()
		{
			cout<<"Hours: ";
			cin>>hrs;
			cout<<"Minutes: ";
			cin>>mins;
			cout<<endl;
		}
		void showtime(){
			cout<<hrs<<"hours:"<<mins<<"minutes";
		}
		
		friend time sum(time, time);
};
time sum(time t1, time t2)
{
	time t3;
	t3.mins= t1.mins + t2.mins;
	t3.hrs= t3.mins/60;
	t3.mins= t3.mins%60;
	t3.hrs += t1.hrs + t2.hrs;
	return t3;
}
int main()
{
	time t1;
	cout<<"First time: "<<endl;
	t1.gettime();
	time t2;
	cout<<"Second time: "<<endl;
	t2.gettime();
	cout<<"Sum of time: "<<endl;
	time t3;
	t3=sum(t1, t2);
	t1.showtime(); cout<<" + "; t2.showtime(); cout<<"= ";
	t3.showtime();
	return 0;
}
