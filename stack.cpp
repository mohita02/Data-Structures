#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size,top;
    int item;
    public:
    stack()
    {   
        cin>>size;
        top=-1;
        arr=new int[size];
    }
    void push(int item)
    {
        if(top==size)
        {
            cout<<"overflow";
        }
        else
        {
            top++;
            arr[top]=item;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow";
        }
        else{
           // int temp=arr[top];
            top--;
        }
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    s.display();
    s.pop();
   // s.pop();
        
    s.display();
    s.push(9);
   // s.display();
}