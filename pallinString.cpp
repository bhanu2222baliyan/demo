#include<iostream>
#include<string.h>
using namespace std;
char pallindrome(char,int,int);
int main()
{
    int i,j,l;
    char s[10];
    gets(s);
    l=strlen(s);
    i=0;
    j=l-1;
    pallindrome(s,i,j);
}
char pallindrome(char s,int i,int j)
{
    if(i==j)
    {
        return "pallin";
    }
    else if(s[i]==s[j])
        return pallindrome(s,i=i+1,j=j-1);
    else
        return "not pallin";
}
