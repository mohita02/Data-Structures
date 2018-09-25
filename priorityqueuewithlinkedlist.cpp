#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
    int priority;
};
class pq{
    node *front;
    public:
    pq()
    {
        front=NULL;
    }
    void insert(int item,int priority)
    {
        node *newnode;
        newnode=new node;
        newnode->data=item;
        newnode->priority=priority;
        if(front==NULL || priority<front->priority)
        {
            newnode->next=front;
            front=newnode;
        }
        else
        {
            node *ptr;
            ptr=front;
            while(ptr->next!=NULL && ptr->next->priority<=priority)
            {
                ptr=ptr->next;
            }
            newnode->next=ptr->next;
            ptr->next=newnode;
        }
    }
    void del()
    {
        node *temp;
        if(front==NULL)
        {
            cout<<"queue underflow"<<endl;
        }
        else{
            temp=front;
            front=front->next;
            delete(temp);
        }
    }
    void display()
    {
        node *ptr;
        ptr=front;
        if(ptr==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue is "<<endl;
            cout<<"priority      item"<<endl;
            while(ptr!=NULL)
            {
                if(ptr->priority==1)
                {

                }
                else{
                     cout<<ptr->priority<<" "<<ptr->data<<endl;
                }
               
                ptr=ptr->next;
            }
        }
    }
};
int main()
{
    pq p;
    int item;
    int priority;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>item;
        cin>>priority;
        p.insert(item,priority);
    }
    p.display();
}