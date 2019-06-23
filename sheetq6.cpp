#include<iostream>
using namespace std;
int rev(int,int);
int main()
{
    int n,res,k;
    cin>>n;
    k=n;
    res=rev(n,0);
    cout<<res;
}
int rev(int n,int temp)
{
    if(n==0)
        return temp;

    temp=(temp*10)+(n%10);
    return rev(n/10,temp);
}
