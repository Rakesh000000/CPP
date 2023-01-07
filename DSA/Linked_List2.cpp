//Insertion and deletion in linked list at the end
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
    void Insert_End();
    void Delete_End();
    void Display();
};

void List::Insert_End(){
    int dataIn;
    newnode = (Node *)malloc(sizeof(Node));
    
    if(newnode == NULL)
    cout<<"Memory full"<<endl;
    
    else{
        cout<<"New data: "; cin>>dataIn;
        newnode->info = dataIn;
        
        if(head == NULL){
            head = newnode;
            newnode->link = NULL;
        }
        
        else{
            ptr = head;
            while(ptr->link != NULL)
                ptr = ptr->link;
            
            ptr->link = newnode;
            newnode->link = NULL;

        }
    }
}

void List::Delete_End(){
    Node *temp;
    ptr = head;
    while(ptr->link !=  NULL){
        temp =ptr;
        ptr = ptr->link;
    }
    free(ptr);
    temp->link = NULL;
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
    int ch;
    cout<<"List Operation:\n1.Insert_End \n2.Delete_End \n3.Display \n4.Exit"<<endl;
    while(1){
        cout<<"Choice";cin>>ch;
        switch(ch){
            case 1:
            L.Insert_End();
            break;

            case 2:
            L.Delete_End();
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