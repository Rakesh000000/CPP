#include<iostream>
#define MAXSIZE 5
using namespace std;

class Queue{
    private:
    int rear, front, q[MAXSIZE];
    
    public:
    Queue(){rear=-1; front=0;}
    void Enqueue();
    void Dequeue();
    void Display();
};

void Queue::Enqueue(){
    int dataIn;
    if(rear==MAXSIZE-1)
    cout<<"Queue is full"<<endl;

    else{
        rear++;
        cout<<"Value:"; cin>>dataIn;
        q[rear]=dataIn;
    }
}

void Queue::Dequeue(){
    int dataOut;
    if(rear==-1)  //or rear<front
    cout<<"Queue is empty"<<endl;

    else{
        dataOut = q[0]; //or q[front]
        for(int i=0; i<rear;i++){
            q[i]=q[i+1];
        }
        cout<<dataOut<<endl;
        rear--;
    }
}

void Queue::Display(){
    for(int i=front; i<=rear; i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue q;
    int choice;
    cout<<"Queue operation: \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit"<<endl;
    while(1){
        cout<<"Choice: "; cin>>choice;
        switch(choice){
            case 1:
            q.Enqueue();
            break;

            case 2:
            q.Dequeue();
            break;

            case 3:
            q.Display();
            break;
            
            case 4:
            exit(0);

            default:
            cout<<"Invalid input"<<endl;
        }
    }
    return 0;
}