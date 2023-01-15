#include<iostream>
using namespace std;

class Lecturer{
    protected: 
    string name;
    int id;

    public:
    void read_data()
    {
        cout<<"Name: "; cin>>name;
        cout<<"ID: "; cin>>id;
    }

    void display()
    {
        cout<<endl<<"DATA"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class Full_time: public Lecturer{
    private:
    float pay_per_month;

    public:

    void read_data()
    {
        Lecturer::read_data();
        cout<<"Payment per month: "; cin>>pay_per_month;
    }

    void display()
    {
        Lecturer::display();
        cout<<"Payment per month: "<<pay_per_month<<endl;
    }
};

class Part_time: public Lecturer{
    private:
    float pay_per_hr;

    public:
    void read_data()
    {
        Lecturer::read_data();
        cout<<"Payment per hour: "; cin>>pay_per_hr;
    }

    void display()
    {
        Lecturer::display();
        cout<<"Payment per hour: "<<pay_per_hr<<endl;
    }
};

int main()
{
    int ch;
    cout<<"Is the lecturer full time or part time? "<<endl<<"1. full time"<<endl<<"2. part time"<<endl<<"choice: "; cin>>ch;

    if (ch ==1)
    {
        Part_time p;
        p.read_data();
        p.display();
    }

    else if (ch == 2)
    {
       Full_time f;
       f.read_data();
       f.display();
    }

    else 
    cout<<"Invalid";

    return 0;
}