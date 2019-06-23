#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i,j,a[10],b[10],l,n,sum=0,min;
    cin>>n;
    for(i=0;i<n;i++)
    {
            cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                b[l]=abs(a[i]-a[j]);
                l++;
            }
        }
        min=b[0];
        for(j=0;j<l;j++)
        {
            if(b[j]<min)
            {
                min=b[j];
            }
        }
        sum+=min;

    }
        cout<<sum;
}
