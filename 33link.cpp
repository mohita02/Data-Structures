#include<iostream>
#include<stdio.h>
using namespace std;
#define max 6




bool IsPopOrder(int pu[],int po[],int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(pu[i]==po[j])
            {
                flag=1;
            }
            else{
                flag=0;
            }
        }
}
if(flag==1)
{
    return true;
}
else{
    return false;
}
}

















int main(int argc,char* argv[])
{
    int nlength;
    cin>>nlength;
    int push[nlength];
    for(int i=0;i<nlength;i++)
    {
        cin>>push[i];
    }
    int pop[nlength];
    for(int i=0;i<nlength;i++)
    {
        cin>>pop[i];
    }
    bool x=IsPopOrder(push,pop,nlength);
    cout<<x;
    return 0;
}