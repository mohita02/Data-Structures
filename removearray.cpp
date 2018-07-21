#include<iostream>
using namespace std;
class removearray{
    public:
    int temp;
   void remove(int arr[],int size,int pos)
   {
       if(pos>size)
       {
           cout<<"out of range"<<endl;
       }
       else{
          // --pos;
           for(int i=pos;i<=(size-1);i++)
           {
               arr[i]=arr[i+1];
           }
       
       for(int i=0;i<size-1;i++)
       {
           cout<<arr[i]<<" ";
           cout<<endl;
       }
   }
   }
  
};
int main()
{
    int a[100];
    int n,s;
    cout<<"enter size of the array"<<endl;
    cin>>s;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the elements in an array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
   
    removearray t;
    t.remove(a,s,n);
  //  t.display(a,s,n);
    
}