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
    
int  main()
{
    linkedlist l;
    l.createNode(50);
    l.traverse();
    l.insertAtBeg(60);
    l.insertAtBeg(70);
    l.insertAtBeg(80);
    l.insertAtBeg(90);
    l.traverse();
}
        
    
