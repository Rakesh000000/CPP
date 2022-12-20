#include<iostream>
#define MAXSIZE 5
using namespace std;

class Queue{
	private:
		int front, rear, q[MAXSIZE];
	
	public:
		Queue(){rear = -1; front =-1;}
		void Enqueue();
		void Dequeue();
		void Display();
};

void Queue::Enqueue(){
	int dataIn;
	
	if(rear==-1){
		front = rear = 0;
		cout<<"Value: ";cin>>dataIn;
		q[rear]= dataIn;
	}
	
	else{
		if(front ==(rear+1)%MAXSIZE)
			cout<<"Queue is full"<<endl;
		
		else{
			rear = (rear+1)%MAXSIZE;
			cout<<"Value: ";cin>>dataIn;
			q[rear] = dataIn;
		}
		
	}
}

void Queue::Dequeue(){
	int dataOut;
	if(front == -1)
	cout<<"Queue underflow"<<endl;
	
	else{
		dataOut = q[front];
		if(front == rear){
			front = rear = -1;
		}
		
		else
		front = (front+1)%MAXSIZE;
		
		cout<<dataOut<<endl;
	}
}

void Queue::Display(){
	int i;
	i = front;
	do{
		cout<<q[i]<<" ";
		i = (i+1)%MAXSIZE;
	}while(i != (rear+1)%MAXSIZE);
	cout<<endl;
}

int main(){
	int choice;
	Queue q;
	cout<<"Queue Operation: \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit"<<endl;
	while(1){
		cout<<"Choice:"; cin>>choice;
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
				cout<<"Invlaid choice"<<endl;
		}
		}
	return 0;
}
