// WAP to show the push pop and display application of stack

#include<iostream>
#define MAXSIZE 5
using namespace std;

class Stack{
    private: 
    int top, s[MAXSIZE];

    public:

    Stack(){ top = -1;}

    void push();
    void pop();
    void display();
};

void Stack::push(){
    int n;
    if(top == MAXSIZE-1)
    cout<<"Stack is full"<<endl;

    else{
        cout<<"Enter value to push: "; cin>>n;
        s[top+1] = n;
        top++;
    }
}

void Stack::pop(){
    if(top==-1)
    cout<<"Stack is empty"<<endl;
    else{
        cout<<s[top]<<endl;
        top--;
    }
}

void Stack::display(){
    for (int i=0; i<=top; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Stack s;
    int ch;
    cout<<"Stack Application: \n1.Push \n2.Pop \n3.Display \n4.Exit"<<endl;
    while (1)
    {
        cout<<"Choice: ";cin>>ch;
        switch(ch){
            case 1:
            s.push();
            break;

            case 2:
            s.pop();
            break;

            case 3:
            s.display();
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid Input"<<endl;
        }

    }
        return 0;
    
}