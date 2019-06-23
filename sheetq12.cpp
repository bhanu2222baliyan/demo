#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int sum(int [],int,int);
int main()
{
    int a[10],i,n,m,res;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=0;
    res=sum(a,n-1,m);
    cout<<res;
}
int sum(int a[],int n,int m)
{
    if(n<0)
    {
        return m;
    }
    sum(a,n-1,m+=a[n]);
}

