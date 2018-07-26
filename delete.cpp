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
    void delete_from_beg()
    {
        node *temp;
        temp=head;
        head=temp->next;
       // cout<<temp->data;
        free(temp);
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
        free(q);
    }
    void delete_from_loc(int loc)
    {
        node *temp,*q;
        temp=head;
        for(int i=0;i<loc-1;i++)
        {
            temp=temp->next;
        }
        q=temp->next;
        temp->next=q->next;
        free(q);
    }
    void duplicate()
    {
        node *fwd,*prev;
        head=fwd;
        while(fwd->next!=NULL)
        {
            while(prev->next!=NULL)
            { 
                prev=fwd;
            if(fwd->data==prev->next->data)
            {
                fwd->next=prev->next->next;
                free(prev);
            }
            else{
             prev=prev->next;
                
            }
            fwd=fwd->next;
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
   // l.traverse();
   // l.delete_from_loc(3);
   l.duplicate();
    l.traverse();
    //int value;
    //cout<<"enter any number to be inserted"<<endl;
   // cin>>value;
   // l.insertion(value);
   // l.traverse();
}