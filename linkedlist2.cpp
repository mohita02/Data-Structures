#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

class linkedlist{
    node *head;
public:
    linkedlist()
    {
        head=NULL;
    }
     void createNode(int val)
    {
        node *n;
        n=(struct node *)malloc(sizeof(node));
        n->data=val;
        n->next=NULL;
        head=n;
    }
     void insertAtBeg(int val)
    {
        if(head==NULL)
        {
            createNode(val);
        }
        else
        {
            node *firstnode;
            firstnode=(struct node *)malloc(sizeof(node));
            firstnode->data=val;
            firstnode->next=head;
            head=firstnode;
        }
       // insert_at_end(val);
    }
     void insert_at_end(int val)
    {
        if(head==NULL)
        {
            createNode(val);
        }
        else{
            node *ptr;
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            node *newnode;
            newnode=(struct node *)malloc(sizeof(node));
            newnode->data=val;
            newnode->next=NULL;
            ptr->next=newnode;
        }
    }
     void traverse()
    {   
       // int count=0;
        struct node *cur;
        for(cur=head;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
           // count++;
        }
        cout<<endl;
       // cout<<count;
    }
    void insertion(int val)
    {
        if(head==NULL || head->data>val)
        {
            insertAtBeg(val);
        }
        else{
            node *fwd,*prev;
            fwd=head;
            while(fwd->data < val && fwd->next!=NULL)
            {
                prev=fwd;
                fwd=fwd->next;
            }
            node *newnode;
            newnode=new node;
            newnode->data=val;

        if(fwd->next==NULL && fwd->data < val)
        {
            fwd->next=newnode;
            newnode->next=NULL;
        }
        else{
            newnode->next=fwd;
            prev->next=newnode;
        }
        }
    }
};
int main()
{
    linkedlist l;
    int num;
   // l.createNode(num);
    for(int i=0;i<5;i++)
    {   
        cin>>num;
        l.insert_at_end(num);
    }
    l.traverse();
    int value;
    cout<<"enter any number to be inserted"<<endl;
    cin>>value;
    l.insertion(value);
    l.traverse();
}