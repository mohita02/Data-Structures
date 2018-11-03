#include<iostream>
using namespace std;
struct node {
    node *left;
    int data;
    node *right;
}*root;
class mirror_image{
    public:
    void mirror(struct node *ptr,int val)
    {
        if(ptr==NULL)
        {
           // cout<<"treee emptyy"<<endl;
           node *newnode;
           newnode=new node;
           newnode->left=NULL;
           newnode->right=NULL;
           newnode->data=val;
           root=newnode;
        }
        else if(ptr->data > val)
        {
            if(ptr->right!=NULL)
            {
                mirror(ptr->right,val);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->left=NULL;
                newnode->right=NULL;
                newnode->data=val;
                ptr->right=newnode;
                cout<<"right child of "<<ptr->data<<endl;
            }
        }
        else if(ptr->data <  val)
        {
            if(ptr->left!=NULL)
            {
                mirror(ptr->left,val);
            }
            else{
                node *newnode;
                newnode=new node;
                newnode->left=NULL;
                newnode->right=NULL;
                newnode->data=val;
                ptr->left=newnode;
                cout<<"left child of "<<ptr->data<<endl;
            }
        }
       
    }
    void insert(struct node *ptr,int num)
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
              //  cout<<"left child of     "<<ptr->data<<endl;
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
              //  cout<<"right child of      "<<ptr->data<<endl;
            }
        }
    }
    void inorder_trav(struct node *cur)
    {
        if(cur==NULL)
        {
           // cout<<"tree not found"<<endl;
        }
        else
        {
            inorder_trav(cur->left);
            cout<<cur->data<<"\t";
            inorder_trav(cur->right);
        }
    }
    
};
int main()
{
    mirror_image m;
    root=NULL;
    int n;
    int item;
    cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>item;
    //     m.insert(root,item);
    // }
    // m.inorder_trav(root);
    // cout<<"******************"<<endl;
    int num;
    for(int j=0;j<n;j++)
    {
        cin>>num;
        m.mirror(root,num);
    }
    m.inorder_trav(root);
      //  m.mirror(root,item);
    //m.insert(root,)

}