#include<bits/stdc++.h>
using namespace std;

struct Pair
{
	int min;
	int max;
};

struct Pair getmM(int *a, int n)
{
	Pair minmax;
	int i;
	
	if(n%2==0)
	{
		if(a[0]>a[1])
		{
			minmax.max=a[0];
			minmax.min=a[1];
		}
		else
		{
			minmax.max=a[1];
			minmax.min=a[0];
		}
		
	 i=2;
	}
	
	else
	{
		minmax.min=minmax.max=a[0];
		i=1;
	}
	
	while(i<n-1)
	{
		if(a[i]<a[i+1])
		{
			if(a[i]<minmax.min)
			minmax.min=a[i];
			
			if(a[i+1]>minmax.max)
			minmax.max=a[i+1];
		}
		else
		{
			if(a[i+1]<minmax.min)
			minmax.min=a[i+1];
			
			if(a[i]>minmax.max)
			minmax.max=a[i];
		}
		
		i+=2;
	}
	
	return minmax;
}


int main()
{
	int n=6;
	int a[]={2,3,1,69,0,99};
	
	Pair minmax=getmM(a,n);
	
	cout<<"MAX:"<<minmax.max<<endl;
	cout<<"min:"<<minmax.min;
	
	return 0;
}
