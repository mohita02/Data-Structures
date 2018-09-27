#include<iostream>
using namespace std;
struct node{
    node *left;
    int data;
    node *right;
}*root;
class bst{
    public:
    void insert(node *ptr,int num)
    {
        if(root==NULL)
        {
            node *newnode;
            newnode=new node;
            newnode->data=num;
            newnode->left=NULL;
            newnode->right=NULL;
            root=newnode;
        }
        else if(ptr->data > num)
        {
            if(ptr->left!=NULL)
            {
                insert(ptr->left,num);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->data=num;
                newnode->left=NULL;
                newnode->right=NULL;
                ptr->left=newnode;
                cout<<"left child"<<ptr->data<<endl;
            }
        }
        else if(ptr->data < num)
        {
            if(ptr->right!=NULL)
            {
                insert(ptr->right,num);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->data=num;
                newnode->left=NULL;
                newnode->right=NULL;
                ptr->right=newnode;
                cout<<"right child"<<ptr->data<<endl;
            }
        }
    }
    void search(node *temp,int num)
    {
        if(temp==NULL)
        {
            cout<<"not found"<<endl;
        }
        else 
        {
            if(temp->data < num)
        {
            search(temp->right,num);
            //cout<<"item found "<<temp->data<<endl;
        }
        else if(temp->data > num){
            search(temp->left,num);
           // cout<<"item found "<<temp->data<<endl;
        }
        else if(temp->data == num)
        {
            cout<<"item found "<<temp->data<<endl;
        }
        }
       // cout<<"item found at "<<temp->data<<endl;
    }
};
int main()
{
    bst b;
    int n;
    cin>>n;
    int num;
    root=NULL;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        b.insert(root,num);
    }
    cin>>item;
    b.search(root,item);
}
