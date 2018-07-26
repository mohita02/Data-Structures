#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class linkedlist
{
    node *head;
    public:
    linkedlist()
    {
        head=NULL;
    }
    void createnode(int val)
    {
        node *n;
        n=new node;
        n->data=val;
        n->next=NULL;
        head=n;
    }
    void insertatend(int val)
    {
        if(head==NULL)
        {
            createnode(val);
        }
        else
        {
            node *ptr;
            head=ptr;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            node *lastnode;
            lastnode=new node;
            lastnode->data=val;
            lastnode->next=NULL;
            ptr->next=lastnode;
            
        }
    }
    void deleteatend()
    {
        node *tail,*q;
        q=head;
        while(q->next!=NULL)
        {
            tail=q;
            q=q->next;
        }
        tail->next=NULL;
        delete(q);
    }
    void traverse()
    {
        struct node *cur;
        for(cur=head;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    linkedlist l;
    l.insertatend(10);
    l.insertatend(20);
    l.insertatend(30);
    l.traverse();
    l.deleteatend();
    l.traverse();
    
}