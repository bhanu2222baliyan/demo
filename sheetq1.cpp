#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,res;
    cin>>n;
    res=fact(n);
    cout<<res;
}
int fact(int n)
{
    if(n==1)
        return 1;

return(n*fact(n-1));
}
