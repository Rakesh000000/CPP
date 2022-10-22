#include<iostream>
using namespace std;

class Person{
    protected:
    string name, address;
    double phone;

    public:
    void Set_data()
    {
        cout<<"Name: "; cin>>name;
        cout<<"Address: "; cin>>address;
        cout<<"Phone number: "; cin>>phone;
    }

    void Show_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Phone number: "<<phone<<endl;
    }
};

class Employee: public Person{
    protected:
    int eno;
    string ename;

    public:
    void Set_data()
    {
        Person::Set_data();
        cout<<"Employee number: "; cin>>eno;
        cout<<"Name: "; cin>>ename;
    }
    void Show_data()
    {
        Person::Show_data();
        cout<<"Employee number: "<<eno<<endl;
        cout<<"Name: "<<ename<<endl;
    }
};

class Manager: public Employee{
    protected:
    string dept_name;
    public:
    float basic_salary;

    void Set_data()
    {
        Employee::Set_data();
        cout<<"Department name:"; cin>>dept_name;
        cout<<"Basic_salary:"; cin>>basic_salary;
    }

    void Show_data()
    {
        Employee::Show_data();
        cout<<"Department name:"<<dept_name<<endl;
        cout<<"Basic_salary:"<<basic_salary<<endl;
    }
};

int main()
{
    Manager *m;
    int n;
    float salary=0;
    cout<<"Number of Managers: "; cin>>n;
    m = new Manager [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Manager "<<i+1<<":"<<endl;
        m[i].Set_data();
        cout<<endl;
        if(salary<m[i].basic_salary)     //salary = salary<m[i].basic_salary?m[i].basic_salary:salary;
        salary = m[i].basic_salary;
    }
    
    cout<<"MANAGER WITH HIGHEST SALARY: "<<endl;

    for(int i=0; i<n; i++)
    {
        if (m[i].basic_salary == salary )
        {
            m[i].Show_data();
        }
    }

    delete[] m;
    return 0;
}