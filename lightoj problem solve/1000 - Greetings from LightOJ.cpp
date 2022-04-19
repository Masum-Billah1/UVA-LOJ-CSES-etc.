#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,s,i;
    cin >> t;
    int a[t][2];
    for(i=0;i<t;i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for(i=0;i<t;i++)
    {
        s=a[i][0]+a[i][1];
        printf("Case %d: %d\n",i+1,s);
    }
}
