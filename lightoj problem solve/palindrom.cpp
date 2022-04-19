#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,rn=0,m,p,t,t1,k;
    cin >> t1;
    for(k=0;k<t1;k++)
    {
        rn =0;
    cin >> n;
    t=n;
    int a[10];
    for(i=0;n>0;i++){
        a[i]=n%10;
        n=n/10;
    }
    j=i;
    m=j-1;
    for(i=0;i<j;i++)
    {
        p = pow(10,m);
        if(p!=1 && p%10!=0)
            p++;
        rn=rn+a[i]*p;
        m--;
    }
    if(t==rn)
        printf("Case %d: Yes\n",k+1);
    else
        printf("Case %d: No\n",k+1);
    }
}
