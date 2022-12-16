#include<iostream>
using namespace std;

class Time{
	private:
		int hr, min, sec;
		
	public:
		Time()
		{
			hr = 0;
			min = 0;
			sec = 0;
		}
		
		Time(int h, int m, int s)
		{
			hr= h;
			min= m;
			sec= s;
		}
		
		void show()
		{
			cout<<hr<<":"<<min<<":"<<sec;
		}
		Time operator +(Time t)
		{
			Time temp;
			temp.hr = hr + t.hr;
			temp.min = min + t.min;
			temp.sec = sec + t.sec;
			return temp;
		}
		
		void convert()
		{
			min += sec/60;
			sec = sec%60;
			hr += min/60;
			min = min%60;
		}
};

int main()
{
	Time t1(2,40,10), t2(3,30,10), t3;
	t1.convert();
	t2.convert();
	t3 = t1+t2;
	t3.convert();
	t1.show();
	cout<<" + ";
	t2.show();
	cout<<" = ";
	t3.show();
	
	return 0;
}
