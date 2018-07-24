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
    void printnode(int num)
    {
        node *ptr;
        ptr=head;
        for(int i=1;i<=num-1;i++)
        {
            ptr=ptr->next;
        }
        cout<<ptr->data<<endl;
    }
    void traverse()
    {   
        int count=0;
        struct node *cur;
        for(cur=head;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
            count++;
        }
        cout<<endl;
        cout<<count;
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
    void insert_at_loc(int val,int loc)
    {
        node *ptr;
        ptr=head;
        for(int i=1;i<loc-1;i++)          //pehle head pe hi h toh ab 2nd pe ajygaa
        {
            ptr=ptr->next;
        }
        node *newnode;
        newnode=(struct node *)malloc(sizeof(node));
        newnode->data=val;
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
};
    
int  main()
{
    linkedlist l;
    int n;
    cout<<"enter location";
    cin>>n;
    
    l.createNode(100);
   // l.traverse();
    l.insertAtBeg(90);
   //  l.traverse();
    l.insertAtBeg(80);
   //  l.traverse();
    l.insertAtBeg(60);
   //  l.traverse();
    l.insertAtBeg(40);
   // l.traverse();
  //  l.insert_at_end(100);
  //   l.traverse();
   // l.insert_at_loc(120,3);
    
    l.traverse();
}
        
    
