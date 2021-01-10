#include<iostream>
using namespace std;

int m=4,n=3;

/*
void spiraltraversal(int a[m][n])
{
	int t=0,b=m-1,l=0,r=n-1,dir=0;
	cout<<"Spiral Order:\n\n";
	
	while(t<=b && l<=r)
	{
		if(dir==0)
		{
			for(int i=l;i<=r;i++)
			cout<<a[t][i];
			t++;
		}
		else if(dir==1)
		{
			for(int i=t;i<=b;i++)
			cout<<a[i][r];
			r--;
		}
		
		else if(dir==2)
		{
			for(int i=r;i>=l;i--)
				cout<<a[b][i];
			b--;
		}
		else if(dir==3)
		{
			for(int i=b;i>=t;i--)
				cout<<[i][l];
			l++;
			
		}
		
		dir=(dir+1)%4;
	}
}

*/
int main()
{
	int a[m][n];
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=1+ rand() % 25;
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	int t=0,b=m-1,l=0,r=n-1,dir=0;
	cout<<"Spiral Order:\n\n";
	
	while(t<=b && l<=r)
	{
		if(dir==0)
		{
			for(int i=l;i<=r;i++)
			cout<<a[t][i]<<" ";
			
			t++;
		}
		
		else if(dir==1)
		{
			for(int i=t;i<=b;i++)
			cout<<a[i][r]<<" ";
			
			r--;
		}
		
		else if(dir==2)
		{
			for(int i=r;i>=l;i--)
				cout<<a[b][i]<<" ";
				
			b--;
		}
		
		else if(dir==3)
		{
			for(int i=b;i>=t;i--)
				cout<<a[i][l]<<" ";
				
			l++;
			
		}
		
		dir=(dir+1)%4;
	}
	
	return 0;
	
	
}
