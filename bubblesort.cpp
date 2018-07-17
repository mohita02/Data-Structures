#include<iostream>
using namespace std;
class bubble
{
    public:
    void sort(int arr[],int s)
    {
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                int temp;
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
};
int main()
{
    int a[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    bubble obj;
    obj.sort(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
        cout<<endl;
    }
}