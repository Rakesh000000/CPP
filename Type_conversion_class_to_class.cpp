#include<iostream>
using namespace std;

class Tola{
	public:
		float tola;
		
	public:
		void get_data()
		{
			cout<<"Enter weight in tola :"; cin>>tola;
		}
		float pass()
		{
			return tola;
		}
		
		void display()
		{
			cout<<"Weight in tola: "<<tola;
		}
};

class Gram{
	private:
		float gm;
		
	public:
		Gram()
		{
			gm = 0;
		}
		Gram(float a)
		{
			gm = a;
		}
		
		Gram( Tola t1)
		{
			gm = t1.tola * 11.66;
//			gm = t1.pass()*11.66;
		}
		
		void display()
		{
			cout<<"Weight in gram = "<<gm<<endl;
		}
};


int main()
{
	Tola t;
	t.get_data();
	Gram g;
	g = t;
	g.display();
	return 0;
}
