#include<iostream>
using namespace std;
int main()
{
    int vertices,i,j;
    cin>>vertices;
    int a[vertices][vertices];
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            a[i][j]=0;
        }
    }
    while(1)
    {
        cin>>i>>j;
        if(i==-1 && j==-1)
        {
            break;
        }
        else if(i==j)
        {
            break;
        }
        else{
            a[i][j]=1;
        }
    }
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}