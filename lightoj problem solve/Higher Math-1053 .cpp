#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()

{

    int a,b,c,t,n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
    cin >> a >> b >> c;
    if(a>b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a>c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)
    {
        t = b;
        b = c;
        c = t;
    }
    if(a*a+b*b == c*c)
        printf("Case %d: yes\n",i+1);
    else
        printf("Case %d: no\n",i+1);
    }
    return 0;
}
