#include<iostream>
using namespace std;

class Node{
    public:
    Node *left, *right;
    int info;
};

class Tree{
    public:
    Node *root, *newnode;
    Tree(){root = NULL;}
    void insertion(Node*, int);
    void preOrder(Node*);
    void postOrder(Node*);
    void inOrder(Node*);
};

void Tree::insertion(Node *tree, int dataIn){
    newnode = new Node;
    newnode->info = dataIn;
    newnode->left = NULL;
    newnode->right = NULL;

    if(tree == NULL){
        tree = newnode;
        root = newnode;
    }

    else if(dataIn < tree->info){
        if(tree->left == NULL)
        tree->left = newnode;

        else
        insertion(tree->left, dataIn);
    }

    else if(dataIn > tree->info){
        if(tree->right == NULL)
        tree->right = newnode;

        else
        insertion(tree->right, dataIn);
    }
    
    else
    cout<<"Duplicate data"<<endl;
}

void Tree::preOrder(Node *tree){
    Node *temp;
    temp = tree;
    if(temp != NULL){
        cout<<" "<<temp->info<<" ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void Tree::postOrder(Node *tree){
    Node *temp;
    temp = tree;
    if(temp != NULL){
        postOrder(tree->left);
        postOrder(tree->right);
        cout<<" "<<temp->info<<" ";
    }
}

void Tree::inOrder(Node *tree){
    Node *temp;
    temp = tree;
    if(temp != NULL){
        inOrder(tree->left);
        cout<<" "<<temp->info<<" ";
        inOrder(tree->right);
    }
}

int main(){
    Tree t;
    int dataIn, ch;
    cout<<"Binary search tree: \n1.Insertion \n2.Preorder \n3.Postorder \n4.Inorder \n5.exit "<<endl;
    while(1){
        cout<<"Choice: "; cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter data: "; cin>>dataIn;
            t.insertion(t.root, dataIn);
            cout<<endl;
            break;

            case 2:
            t.preOrder(t.root);
            cout<<endl;
            break;

            case 3:
            t.postOrder(t.root);
            cout<<endl;
            break;

            case 4:
            t.inOrder(t.root);
            cout<<endl;
            break;

            case 5:
            exit(0);
            
            default:
            cout<<"Invalid choice "<<endl;
        }
    }
    return 0;
}