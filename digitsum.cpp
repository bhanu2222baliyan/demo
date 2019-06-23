#include<iostream>
using namespace std;
int digitsum(int);
int main()
{
    int n,res;
    cin>>n;
    res=digitsum(n);
    cout<<res;
}
int digitsum(int n)
{
    if(n==0)
        return 0;

return(n%10+digitsum(n/10));
}
