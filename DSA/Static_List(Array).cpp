#include<iostream>
#define MAXSIZE 5
using namespace std;

class List{
    private:
    int head, arr[MAXSIZE];

    public:
    List(){head = 0;}

    void Traversal();
    void Search();
    void Insert();
    void Delete();

    //operation types:

    void Insert_Middle();
    void Insert_Begining();
    void Insert_End();
    void Delete_Middle();
    void Delete_Begining();
    void Delete_End();
};

void List::Insert(){

}

void List::Delete(){
    
}

void List::Traversal(){
    if(head == 0)
    cout<<"List is empty"<<endl;

    else{
        for (int i=0; i<head; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

void List::Search(){
    int search, count=0;
    if(head==0){cout<<"List is empty"<<endl;}
    else{
        cout<<"Enter vlaue to search: "; cin>>search;
        
        for(int i=0;i<head;i++){
            if(arr[i]==search){
            count++;
            }
        }
        
        if(count>0)
        cout<<count<<" Data found"<<endl;

        else
        cout<<"Data not found"<<endl;
    }
}

int main(){
    int array[MAXSIZE];

    return 0;
}