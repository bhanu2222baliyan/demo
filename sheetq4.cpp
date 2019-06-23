#include<iostream>
using namespace std;
int multi(int,int);
int main()
{
    int n,res,m;
    cin>>m>>n;
    res=multi(m,n);
    cout<<res;
}
int multi(int m,int n)
{
    if(n==1)
        return m;
    if(n==0)
    {
        return 1;
    }

return(m*multi(m,n-1));
}
