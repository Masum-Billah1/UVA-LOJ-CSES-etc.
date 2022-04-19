#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,a,b,t;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        if(b>=a)
            t = b*4+19;
        else
            t = (a-b+a)*4+19;
        printf("Case %d: %d\n",i+1,t);
    }
    return 0;
}
