#include<iostream>
using namespace std;
int product(int,int);
int main()
{
    int a,b,res;
    cin>>a;
    cin>>b;
    res=product(a,b);
    cout<<res;
}
int product(int a,int b)
{
    if(b==0)
        return 0;

return(a+product(a,b-1));
}
