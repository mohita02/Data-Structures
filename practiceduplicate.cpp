#include<iostream>
using namespace std;
class practiceduplicate{
    public:
    void duplicate(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;)
            {
                if(arr[i]==arr[j])
                {
                    for(int k=j;k<size-1;k++)
                    {
                        arr[k]=arr[k+1];
                        --size;
                    }
                }
                else
                {
                    j++;
                }
            }
        }
        for(int i=0;i<size;i++)
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
    cout<<"enter the size of array"<<endl;
    cin>>s;
    cout<<s;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    practiceduplicate pd;
    pd.duplicate(a,s);
}