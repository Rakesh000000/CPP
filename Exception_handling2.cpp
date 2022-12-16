#include<iostream>
#include<conio.h>
using namespace std;
class ABC{
	private:
		int year;
		int month;
		int day;
		public:
			ABC(){
				year=0;
				month=0;
				day=0;
			}
			ABC(int x,int y,int z){
				year=x;
				month=y;
				day=z;
			}
			
			class Wrongyear{};
			class Wrongmonth{};
			class Wrongday{};

		void check(){
			if(year>2079){
				throw Wrongyear(); 
			}
			if(month>12){
				throw Wrongmonth();
			}
			if(day>30){
				throw Wrongday();
			}
			if(year<2078 && month<12 && day<30){
				cout<<"your birthdate is correct";
			}
		}	
			
};

int main(){
 
	try{
		ABC a(5000,10,15);
		a.check();
		}
		catch(ABC::Wrongyear){
			cout<<"your birth year is incorrect";
		}
		catch(ABC::Wrongmonth){
			cout<<"you birth month is not correct";
		}
		catch(ABC::Wrongday){
			cout<<"your birthday is incorrect";
		}
	 return 0;
}
