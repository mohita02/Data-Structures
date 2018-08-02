#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
};
class linkedpractice
{
    node *head;
    public:
    linkedpractice()
    {
        head=NULL;
    }
    void createnode(int val)
    {
        node *newnode;
        newnode=new node;
        newnode->next=NULL;
        newnode->data=val;
        head=newnode;
    }
    void insert_at_beg(int val)
    {
        node * newnode;
        newnode=new node;
        newnode->next=head;
        newnode->data=val;
        head=newnode;
    }
    void insert_at_end(int val)
    {
        node *newnode;
        node *ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        newnode=new node;
        ptr->next=newnode;
        newnode->next=NULL;
        newnode->data=val;
        ptr=newnode;
    }
    void traverse()
    {
        node *cur;
        for(cur=head;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
        }
        cout<<endl;
    }
    void insert_at_loc(int val,int loc)
    {
        node *ptr;
        node *newnode;
        ptr=head;
        for(int i=1;i<loc-1;i++)
        {
            ptr=ptr->next;
        }
        newnode=new node;
        newnode->data=val;
       
        newnode->next=ptr->next;
         ptr->next=newnode;
        //newnode=ptr;

    }
    void delete_from_beg()
    {
        node *temp;
        temp=head;
        head=temp->next;
        delete(temp);
    }
    void delete_from_end()
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
    void delete_from_loc(int loc)
    {
        node *temp,*q;
        temp=head;
        for(int i=0;i<loc-1;i++)
        {
            //q=temp;
            temp=temp->next;
        }
        q=temp->next;
        temp->next=q->next;
        
        delete(q);
    }
};
int main()
{
    linkedpractice ld;
    ld.createnode(10);
    ld.traverse();
    ld.insert_at_beg(20);
    ld.insert_at_beg(60);
    ld.insert_at_beg(70);
    ld.traverse();
     ld.delete_from_loc(2);
    ld.traverse();
   /* ld.insert_at_end(30);
    ld.traverse();
    ld.insert_at_loc(40,2);
    ld.traverse();
    ld.delete_from_beg();
    ld.traverse();
    ld.delete_from_end();
    ld.traverse();
   
    ld.traverse();*/

}