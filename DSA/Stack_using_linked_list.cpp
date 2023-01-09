#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
    public:
    int info;
    Node *link;
};

class Stack{
    public:
    Node *newnode, *ptr, *top;

    Stack(){top = NULL;}
    void Push(int);
    void Pop();
    void Display();
};

void Stack::Push(int dataIn){
    newnode->info = dataIn;
    newnode->link = top;
    top = newnode;
}

void Stack::Pop(){
    Node *temp;
    temp = top;
    cout<<temp->info<<endl;
    top = temp->link;
    free(temp);
}

void Stack::Display(){
    ptr = top;
    while(ptr != NULL){
        cout<<ptr->info<<" ";
        ptr = ptr->link;
    }
    cout<<endl;
}

int main(){
    Stack s;
    int ch, data;
    cout<<"Stack Application: \n1.Push \n2.Pop \n3.Display \n4.Exit"<<endl;
    while(1){
        cout<<"Choice: ";cin>>ch;
        switch(ch){
            case 1:
            cout<<"Data to push: ";cin>>data;
            s.Push(data);
            break;

            case 2:
            s.Pop();
            break;

            case 3:
            s.Display();
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}