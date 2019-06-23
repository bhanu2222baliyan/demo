#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int b2d(char *,int,int);
int main()
{
    int last,res,exp=0;
    char c[]="1010";
    last=strlen(c)-1;
    res=b2d(c,last,exp);
    cout<<res;
}
int b2d(char *c,int last,int exp)
{
    if(last<0)
        return 0;
    return ((c[last]-'0')*pow(2,exp)+b2d(c,last-1,exp+1));
}
