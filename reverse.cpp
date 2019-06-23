#include<iostream>
using namespace std;
void reverse(int[],int,int);
int main()
{
    int a[10],n,res,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    j=n-1;
    reverse(a,i,j);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
}
void reverse(int a[],int i,int j)
{
    int temp;
    if(i==j)
        return ;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    return reverse(a,i=i+1,j=j-1);
}
