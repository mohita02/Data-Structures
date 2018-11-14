#include<iostream>
using namespace std;
int hashing(int key,int size)
{
    int loc=key%size;
    return loc;
}
void linear_probing(int hh,int a[],int key,int size)
{
    int l=hashing(key,size);
    if(a[l]==0)
    {
        a[l]=key;
    }
    else
    {
        for(int k=1;k%size!=l;k++)
        {
        l=(l+1)%size;
        if(a[l]==0)
        {
        a[l]=key;
        break;
        }
        }
    }
}
void display(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<"\t";
    }
}
int main()
{
    int size;
    cout<<"enter the size of ht"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        a[i]=0;
    }
    int hh;
    cout<<"enter num of keys"<<endl;
    cin>>hh;
    int val;
    for(int j=0;j<hh;j++)
    {
        cin>>val;
         linear_probing(hh,a,val,size);
    }
    display(a,size);
   

}