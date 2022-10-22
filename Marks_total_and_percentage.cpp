#include<iostream>
using namespace std;

class Marks{
    protected:
    float subj[3];

    public:

    void Set_data()
    {
        cout<<"Enter marks: "<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"Subject "<<i+1<<":";
            cin>>subj[i];
        }
    }
};

class Total: public Marks {
    protected:
    float sum=0;
    public:
    void total()
    {
        for (int i=0;i<3;i++)
        {
            sum += subj[i];
        }
    }
};

class Percentage: public Total {
    private:
    float percent;

    public:
    void display_percent()
    {
        percent = (sum/300.0)*100.0;
        cout<<"Percentage = "<<percent;
    }
};

int main()
{
    Percentage p1;
    p1.Set_data();
    p1.total();
    p1.display_percent();

    return 0;
}