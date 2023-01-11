//6. Write program with objects as function argument by passing by value, passing by address and passing by 
//reference defining a class Time with data member hour, minute, second as integers. Write member functions 
//to read the data for objects and to show the value of objects of Time. Define a friend function addtime()
//with objects as arguments and return the sum of two objects. Show the values of each object and their sum 
//as output.

#include<iostream>
using namespace std;

class Time
{
    private:
        int hrs,min,sec;
    public:
        void gettime(int h, int m, int s)
        { hrs=h; min=m; sec=s;}

        void convert()  // function to convert the time in proper format
        {
            min += sec/60;
            sec = sec%60;
            hrs += min/60;
            min = min%60;
        }
        void showtime()
        {
            cout<<hrs<<":"<<min<<":"<<sec;
        }
        
        friend Time sum(Time,Time); //declaration of friend function
};                          // end class time

Time sum(Time t1,Time t2)   //definition
{
    Time t3;
    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;
    return t3;
}


int main()
{
    Time t1;
    t1.gettime(3,45,20);
    t1.convert();
    
    Time t2;
    t2.gettime(2,48,30);
    t2.convert();
    
    Time t3;
    t3=sum(t1,t2);
    t3.convert();
    
    t1.showtime();cout<<" + ";
    t2.showtime();cout<<" = ";
    t3.showtime();
    
    return 0;
}