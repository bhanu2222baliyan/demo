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
    if(n==0)
        return 0;

return(m+multi(m,n-1));
}
