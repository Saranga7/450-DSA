#include<iostream>
using namespace std;

int main()
{
	int z=0,o=0,t=0,n=10;
	
	int a[]={1,1,2,2,0,2,0,1,0,1};
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		z++;
		else if(a[i]==1)
		o++;
		else
		t++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(z>0)
		{
			a[i]=0;
			z--;
			continue;	
		}
		
		if(o>0)
		{
			a[i]=1;
			o--;
			continue;
		}
		
		if(t>0)
		{
			a[i]=2;
			t--;
			continue;
		}
	}
	
	cout<<"\nSorted Array:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
