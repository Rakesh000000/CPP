//Insertion and deletion after an element in a linked list
#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
    public:
    int info;
    Node *link;
};

class List{
    public:
    Node *newnode, *head, *ptr;
    List(){head = NULL;}
    void Insert(int);
    void Delete();
    void Display();
};

void List::Insert(int a){
    int n, flag=0;
    Node *temp;
    ptr = head;
    newnode = (Node *)malloc(sizeof(Node));
    newnode->info = a;
    cout<<"Enter element to insert after:";cin>>n;
    while(ptr->info != n){
        ptr= ptr->link;
        if(ptr = NULL){
          flag = 1;
          break;  
        }
    }
    if(flag == 1)
    cout<<"Element not found"<<endl;

    else{
        newnode->link = ptr->link;
        ptr->link = newnode;
    }
}

void List::Delete(){
    int n, flag=0;
    Node *temp;
    ptr = head;
    cout<<"Enter element to delete after:";cin>>n;
    if(ptr->info == n){
        temp = ptr;
        ptr = ptr->link;
        free(temp);
        head = ptr;
        flag++;
    }
    else{
        while (ptr->info != n){
            temp = ptr;
            ptr = ptr->link;
        }
        temp->link = ptr->link;
        free(ptr);
        flag++;
    }
    if(flag == 0)
    cout<<"Element not found"<<endl;
}

void List::Display(){
    ptr = head;
    while(ptr != NULL){
        cout<<ptr->info<<" ";
        ptr = ptr->link;
    }
    cout<<endl;
}

int main(){
    List L;
    int ch,data;
    cout<<"List Operation:\n1.Insert \n2.Delete \n3.Display \n4.Exit"<<endl;
    while(1){
        cout<<"Choice";cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter data to insert:";cin>>data;
            L.Insert(data);
            break;

            case 2:
            L.Delete();
            break;

            case 3:
            L.Display();
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}