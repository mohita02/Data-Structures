#include<iostream>
#include<limits>
using namespace std;
struct node{
    node *left;
    int data;
    node *right;
}*root;
struct node *insert(struct node *ptr,int val)
{
    if(root==NULL){
        node *newnode;
        newnode=new node;
        newnode->left=NULL;
        newnode->data=val;
        newnode->right=NULL;
        root=newnode;
        return root;
        
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
        newnode->data=val;
        newnode->right=NULL;
        ptr->left=newnode;
        return ptr;
        }
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
        newnode->left=NULL;
        newnode->data=val;
        newnode->right=NULL;
        ptr->right=newnode;
        return ptr;
        }
    }
   // return ptr;
}
void inorder_trav(struct node *temp)
{
    if(temp==NULL)
    {

    }
    else{
        inorder_trav(temp->left);
        cout<<temp->data<<endl;
        inorder_trav(temp->right);
    }
}
bool isBST(struct node *node,struct node *l=NULL,struct node *r=NULL)
{
    if(node==NULL)
    {
        return true;
    }
    if(l!=NULL && node->data < l->data)
    {
        return false;
    }
    if(r!=NULL && node->data > r->data)
    {
        return false;
    }
    return isBST(node->left,l,node) && isBST(node->right,node,r);
}
void preorder_trav(struct node *hel)
{
    if(hel==NULL)
    {
        
    }
    else{
        
        preorder_trav(hel->left);
        preorder_trav(hel->right);
        cout<<hel->data<<"\t";
    }
}
int height_tree(struct node *mode)
{
    if(mode==NULL)
    {
        return -1;
    }
    else{
    int lh=0;
    int rh=0;
    lh=height_tree(mode->left);
    rh=height_tree(mode->right);
    if(lh>rh)
    {
        return lh+1;
    }
    else{
        return rh+1;
    }
    }
}
void printlevelorder(struct node *poy)
{
    int hi=height_tree(poy);
    //cout<<hi<<endl;
    for(int i=1;i<=hi;i++)
    {
        printgivenlevelorder(poy,i);
    }
}

void printgivenlevelorder(struct node *node,int level)
{
    if(node==NULL)
    {

    }
    if(level==1)
    {
        cout<<node->data<<"\t";
    }
    else if(level>1)
    {
        printgivenlevelorder(node->left,level-1);
        printgivenlevelorder(node->right,level-1);
    }
}

int main()
{
    int n;
    cin>>n;
    root=NULL;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        insert(root,item);
    }
   // preorder_trav(root);
    // if(isBST(root,NULL,NULL))
    // {
    //     cout<<"is a bst"<<endl;
    // }
    // else{
    //     cout<<"not a bst"<<endl;
    // }
    // int h=height_tree(root);
    // cout<<"height of the tree is "<<h<<endl;
    printlevelorder(root);
}