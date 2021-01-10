/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void reverse(int *a,int n)
{
    int i=0,l=n-1,temp;
    while(i<=l)
    {
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        
        i++;
        l--;
    }
}

int main()
{
    int n=8;
    int a[]={1,21,2,1,3,4,5,9};
    
    reverse(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}

