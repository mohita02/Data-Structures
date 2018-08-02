#include<iostream>
using namespace std;
class practiceinsert
{
    public:
    void insert(int arr[],int size,int num,int pos)
    {
        for(int i=size;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=num;
        for(int i=0;i<size+1;i++)
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
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>s;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number to be inserrted"<<endl;
    cin>>n;
    cout<<"enter the position on which the element to be inserted"<<endl;
    cin>>p;
    practiceinsert pi;
    pi.insert(a,s,n,p);
}