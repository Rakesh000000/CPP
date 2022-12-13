// WAP to show the push pop and display application of stack using bottom varying method
#include<iostream>
#define MAXSIZE 5
using namespace std;

class Stack{
    private:
    int bos, s[MAXSIZE];

    public:
    Stack(){bos=0;}

    void push();
    void pop();
    void display();
};

void Stack::push(){
    int n;
    if(bos==MAXSIZE)
    cout<<"Stack is full"<<endl;

    else{
        cout<<"Value to push: ";cin>>n;
        s[bos]=n;
        bos++;
    }
}

void Stack::pop(){
    if(bos==0)
    cout<<"Stack is empty"<<endl;
    else{
        cout<<s[0]<<endl;
        bos--;
        for(int i=0;i<bos;i++){
            s[i]=s[i+1];
        }
    }
}

void Stack::display(){
    for(int i=bos-1; i>=0 ;i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Stack s;
    int ch;

    cout<<"Stack Operation: \n1.Push \n2.Pop \n3.Display \n4.Exit"<<endl;
    while(1){
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
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
