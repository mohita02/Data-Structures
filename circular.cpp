#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
class circular{
    node *head;
    public:
    circular()
    {
        head=NULL;
    }
    void createlist(int val)
    {
        node *ptr,*nm;
        nm=new node;
        nm->data=val;
        if(head==NULL)
        {
            nm->next=nm;
            head=nm;
        }
        else
        {
            ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            ptr->next=nm;
            nm->next=head;
        }
    }
    void insertatbeg(int val)
    {
        node *ptr,*nm;
        ptr=head;
        node *newnode;
        newnode=new node;
        nm=newnode;
        
        nm->data=val;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        nm->next=head;
        ptr->next=nm;
        head=nm;
    }
    void traverse()
    {
        node *cur;
        for(cur=head;cur->next!=head;cur=cur->next)
        {
            cout<<cur->data<<"\t";
        }
        cout<<cur->data<<"\t";
        cout<<endl;
    }
    void insertatloc(int loc,int val)
    {
        if(head==NULL)
        {
             createlist(val);
        }
        node *temp;
        node *ptr;
         ptr=head;
        temp=new node;
        temp->data=val;
        for(int i=1;i<loc-1;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
};
int main()
{
    circular c;
    c.createlist(10);
    c.createlist(20);
    c.createlist(30);
    c.createlist(40);
    c.traverse();
    c.insertatbeg(100);
    c.traverse();
    c.insertatloc(2,50);
    c.traverse();

}
