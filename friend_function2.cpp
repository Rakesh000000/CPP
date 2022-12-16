#include<iostream>
using namespace std;

class sample{
	private:
		int a,b;
		
	public:
		void set_data(int x, int y)
		{
			a=x; b=y;
		}
		
		friend float mean(sample);
};

float mean(sample s1)
{
	return (s1.a + s1.b)/2;
}

int main()
{
	sample s1;
	s1.set_data(4,8);
	cout<<"Mean is: "<<mean(s1);
	return 0;
}
