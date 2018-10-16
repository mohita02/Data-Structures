#include<iostream>
using namespace std;
struct node{
    node *left;
    int data;
    node *right;
}*root;
class bst{
    public:
    void insert(struct node *ptr,int val)
    {
        if(root=NULL)
        {
            node *newnode;
            newnode=new node;
            newnode->data=val;
            newnode->left=NULL;
            newnode->right=NULL;
            root=newnode;
        }
        else if(ptr->data < val)
        {
            if(ptr->right!=NULL)
            {
                insert(ptr->right,val);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->data=val;
                newnode->left=NULL;
                newnode->right=NULL;
                ptr->left=newnode;
            }
        }
        else if(ptr->data > val)
        {
            if(ptr->left!=NULL)
            {
                insert(ptr->left,val);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->left=NULL;
                newnode->right=NULL;
                newnode->data=val;
                ptr->left=newnode;
            }
        }
        
    }
    void inorder(struct node *temp)
    {
        if(root=NULL)
        {
            cout<<"empty tree"<<endl;
        }
        else{
            inorder(temp->left);
            cout<<temp->data<<"\t";
            inorder(temp->right);
        }
    }
};
int main()
{
    bst b;
    int n;
    cin>>n;
    int num;
    cout<<n;
   // int item;
    root=NULL;
    for(int i=0;i<n;i++)
    {
       // cin>>num;
       cout<<"hello"<<endl;
        b.insert(root,num);
    }
  //  b.inorder(root);
}