#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int a,n,res;
    cin>>a;
    cin>>n;
    res=power(a,n);
    cout<<res;
}
int power(int a,int n)
{
    if(n==0)
        return 1;

return(a*power(a,n-1));
}
