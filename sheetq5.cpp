#include<iostream>
using namespace std;
int pallin(int,int);
int main()
{
    int n,res,sum=0;
    cin>>n;
    res=pallin(n,sum);
    cout<<res;
}
int pallin(int n,int sum)
{
    if(n==0)
        return sum;

    sum+=n%10;
    return pallin(n/10,sum);
}
