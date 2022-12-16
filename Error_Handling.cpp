#include<iostream>
using namespace std;

class dayError{};
class monthError{};
class yearError{};

int main()
{
	int day,month,year;
	
	try{
	    cout<<"Enter year:"; cin>>year;
		if(year<0 || year>2022)
		throw yearError();
	    
		cout<<"Enter month:"; cin>>month;
		if(month<0 || month>12)
		throw monthError();
	
		cout<<"Enter day:"; cin>>day;
		if(day<0 || day>31)
		throw dayError();
		
		cout<<"You entered: "<<year<<"-"<<month<<"-"<<day<<endl;
    }
	catch(monthError &obj)
	{
		cout<<"Invalid month value"<<endl;
	}
	catch(yearError &obj)
	{
		cout<<"Invalid year value"<<endl;
	}	
	catch(yearError &obj)
	{
		cout<<"Invalid year value"<<endl;
	}
	catch(yearError &obj)
	{
		cout<<"Invalid year value"<<endl;
	}
	catch(dayError &obj)
	{
		cout<<"Invalid day value"<<endl;
	}
	
	return 0;
}
