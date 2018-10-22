//Radix Sort-digit by digit sort starting from least significant to most significant
//n=number of inputs and d=max no. of digit input data has
//So time complexity is O(n*d)
#include<iostream>
using namespace  std;
int getmax(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
			return max;
}
void countsort(int a[],int n,int exp)
{
	int output[n],count[10]={0};
	for(int i=0;i<n;i++)
	{
		count[(a[i]/exp)%10]++;
	}
	for(int i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		output[count[(a[i]/exp)%10]-1]=a[i];
		count[(a[i]/exp)%10]--;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=output[i];
	}
}
void radixsort(int a[],int n)
{
	int exp, m;
	m=getmax(a,n);
	for(exp=1;m/exp>0;exp*=10)
	{
		countsort(a,n,exp);
	}
}
int main()
{
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	radixsort(a,n);
	cout<<"The sorted array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
