#include<iostream>
using namespace std;
class practicerem
{
    public:
    void remove(int arr[],int size,int pos)
    {
        if(pos>size)
        {
            cout<<"out of range"<<endl;
        }
        else
        {
            for(int i=pos;i<=(size-1);i++)
            {
                arr[i]=arr[i+1];
            }
        }
        for(int i=0;i<(size-1);i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    int a[20];
    int s;
    int p;
    cout<<"enter the size of the array"<<endl;
    cin>>s;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position of which the element is to be deleted"<<endl;
    cin>>p;
    practicerem pr;
    pr.remove(a,s,p);
}