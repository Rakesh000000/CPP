#include<iostream>
using namespace std;

namespace user
{
    void display()
    {
        cout<<"Hello this is inside user namespace"<<endl;
    }
}

void display()
{
    cout<<"Hello this is outside user namespace"<<endl;
}

int main()
{
    user::display();
    display();

    return 0;
}