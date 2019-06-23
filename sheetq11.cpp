#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int maximum(int [],int,int);
int main()
{
    int a[10],i,n,m,res;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    res=maximum(a,n,m);
    cout<<res;
}
int maximum(int a[],int n,int m)
{
    if(n<0)
    {
        return m;
    }
    if(m<a[n])
    {
        m=a[n];
    }
    maximum(a,n-1,m);
}

