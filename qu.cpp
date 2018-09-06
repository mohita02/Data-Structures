#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
};
class queue{
    node *front;
    node *rear;
    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void insert(int val)
    {
        node *newnode;
        newnode=new node;
        newnode->data=val;
        if(front==NULL && rear==NULL)
        {
            front=newnode;
            rear=newnode;
            newnode->next=NULL;
        }
        else{
            node *ptr;
            ptr=front;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            rear->next=newnode;
            rear=newnode;
            newnode->next=NULL;
        }
    }
    void delete_node()
    {
        node *temp;
        temp=front;
        front=front->next;
        delete(temp);
    }
    void traverse()
    {
        node *cur;
        for(cur=front;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    queue q;
   int num;
   int size;
   cin>>size;
//    q.insert(10);
//    q.insert(20);
//    q.insert(30);
//    q.insert(40);
//    q.delete_node();
for(int i=0;i<size;i++)
{
    cin>>num;
    q.insert(num);
}
    q.traverse();
}