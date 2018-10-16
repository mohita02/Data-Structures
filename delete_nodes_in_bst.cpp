#include<iostream>
using namespace std;
struct node{
    node *right;
    int data;
    node *left;
}*root;
class delete_nodes_in_bst{
    public:
    node *insert_node(struct node *ptr,int num)
    {
        if(root==NULL)
        {
            node *newnode;
            newnode=new node;
            newnode->left=NULL;
            newnode->right=NULL;
            newnode->data=num;
            root=newnode;
            return root;
        }
        else if(ptr->data > num)
        {
            if(ptr->left!=NULL)
            {
                insert_node(ptr->left,num);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->left=NULL;
                newnode->right=NULL;
                newnode->data=num;
                ptr->left=newnode;
                cout<<"left child of    "<<ptr->data<<endl;
                return ptr;
               
            }
        }
        else if(ptr->data < num)
        {
            if(ptr->right!=NULL)
            {
                insert_node(ptr->right,num);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->left=NULL;
                newnode->right=NULL;
                newnode->data=num;
                ptr->right=newnode;
                cout<<"right child of    "<<ptr->data<<endl;

                return ptr;
                
            }
        }
    }
    void inorder_trav(struct node *root)
    {
        if(root==NULL)
        {
            //cout<<"tree empty"<<endl;
        }
        else{
            inorder_trav(root->left);
            cout<<root->data<<"\t";
            
            inorder_trav(root->right);
        }
    }
    struct node *inorder_suc(struct node *n)
    {
        if(n->right!=NULL)
        {
            return minvalue(n->right);
        }
    }
    struct node *minvalue(struct node *node)
    {
        struct node *cur=node;
        while(cur->left!=NULL)
        {
            cur=cur->left;
        }
        return cur;
    }
    node *delete_node(struct node *root,int key)
    {
        if(root==NULL)
        {
            return root;
        }
        else if(key < root->data)
        {
            root->left=delete_node(root->left,key);
        }
        else if(key > root->data)
        {
            root->right=delete_node(root->right,key);
        }
        else if(root->left==NULL && root->right==NULL)
        {
            delete(root);
            root=NULL;
            return root;
        }
        else if(root->left==NULL)
        {
            struct node *temp;
            temp=root;
            root=root->right;
            delete(temp);
            return root;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root;
            root=root->left;
            delete(temp);
            return root;
        }
        else {
            node *suc=inorder_suc(root);
            root->data=suc->data;
            root->right=delete_node(root->right,suc->data);
            return root;
        }
    }
};
int main()
{
    delete_nodes_in_bst b;
    int size;
    root=NULL;
    cin>>size;
    int item;
    node *nn;
    nn=new node;
    nn->data=10;
    nn->left=NULL;
    nn->right=NULL;
    root=nn;
    node *q;
    q=root;
    for(int i=0;i<size;i++)
    {
        cin>>item;
        q=b.insert_node(q,item);
    }
   q=b.delete_node(q,2);
    b.inorder_trav(root);
}