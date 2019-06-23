#include<iostream>
using namespace std;
int pallin(int,int);
int main()
{
    int n,res,k;
    cin>>n;
    k=n;
    res=pallin(n,0);
    if(res==k)
    {
        cout<<"pallindrome"<<endl;
    }
    else
    {
        cout<<"not pallindrome"<<endl;
    }
}
int pallin(int n,int temp)
{
    if(n==0)
        return temp;

    temp=(temp*10)+(n%10);
    return pallin(n/10,temp);
}
