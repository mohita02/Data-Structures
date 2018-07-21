#include<iostream>
using namespace std;
class insertarray{
    public:
    void insert(int arr[],int size,int  n,int p)
    {
        for(int i=size;i>p;i--)
        {  
            arr[i]=arr[i-1];
        }
         arr[p]=n;
        for(int i=0;i<(size+1);i++)
        {
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
};
int main()
{
    int s;
    cout<<"Enter the size of array"<<endl;
    cin>>s;
    int a[100];
    int num,pos;
    insertarray temp;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"enter number to be inserted"<<endl;
    cin>>num;
    cout<<"enter the position of the element to be inseerted"<<endl;
    cin>>pos;
    temp.insert(a,s,num,pos);
}