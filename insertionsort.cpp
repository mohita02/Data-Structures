//Insertion Sort -It inserts each element in proper place 
//Complexity in best case is O(n) and in worst and avg case is O(n^2) and space complexity is O(1)
#include<iostream>
using namespace std;
int main()
{
	int n,value,hole;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		value=a[i];
		hole=i;
		while(hole>0&&a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
			for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
	cout<<"The sorted array is "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
