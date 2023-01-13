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
    void Insert();
    void Delete();
    void Display();
};

void List::Insert(){
    int n;
    Node *temp;
    ptr = head;
    if(ptr->info == n){
        temp = ptr;
        ptr = ptr->link;
        free(temp);
    }
}

void List::Delete(){
    int n;
    Node *temp;
    ptr = head;
    if(ptr->info == n){
        temp = ptr;
        ptr = ptr->link;
        free(temp);
        head = ptr;
    }
    else{
        while (ptr->info != n){
            temp = ptr;
            ptr = ptr->link;
        }
        temp->link = ptr->link;
        free(ptr);
    }
}

void List::Display(){
    ptr = head;
    while(ptr != NULL){
        cout<<ptr->info<<" ";
        ptr = ptr->link;
    }
    cout<<endl;
}