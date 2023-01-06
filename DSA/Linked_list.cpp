//Insertion and deletion in a linked list from begining
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
    Node *head;
    Node *newnode;
    
    List(){head = NULL;}

    void Insert_Begining();
    void Delete_Begining();
    void Display();
};

void List::Insert_Begining(){
    newnode = (Node *)malloc(sizeof(Node));
    int dataIn;
    if(newnode == NULL)
    cout<<"List is full"<<endl;
    else{
        cout<<"Enter data to insert: ";cin>>dataIn;
        newnode->link = head;
        newnode->info = dataIn;
        head = newnode;
    }
}
void List::Delete_Begining(){
    Node *temp;
    temp = head;
    head = head->link;
    free(temp);
}
void List::Display(){
    Node *ptr;
    ptr = head;
    while(ptr != NULL){
        cout<<ptr->info;
        ptr = ptr->link;
    }
    cout<<endl;
}
int main(){
    List L;
    int ch;
    cout<<"Linked list operation:\n1.Insert_at_begining \n2.Delete_from_begining \n3.Display \n4.Exit"<<endl;
    while(1){
        cout<<"Choice: ";cin>>ch;
        switch(ch){
            case 1:
            L.Insert_Begining();
            break;

            case 2:
            L.Delete_Begining();
            break;

            case 3:
            L.Display();
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}