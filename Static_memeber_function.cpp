#include<iostream>
using namespace std;

class Item{
	private:
		int code;
		static int count;
		
	public:
		Item()
		{
			code = ++count;
		}
		
		void show_code()
		{
			cout<<"Object number: "<<code<<endl;
		}
		
		static void show_count()
		{
			cout<<"Count : "<<count<<endl;
		}
};

int Item::count;

int main()
{
	Item i1;
	i1.show_code();
	Item::show_count();
	Item i2;
	i2.show_code();
	Item::show_count();
	Item i3;
	i3.show_code();
	Item::show_count();
	Item i4;
	i4.show_code();
	Item::show_count();
}
