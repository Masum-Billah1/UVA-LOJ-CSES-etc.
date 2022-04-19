#include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    int i,c=0,r;
    r = sqrt(n);
    for(i=2;i<=r;i++)
    {
        if(n%i==0)
           c=c+2;
    }
    if(r*r==n)
        c--;
    c=c+2;
    return c;

}
int main()
{
    int i,j,a[1000],b[1000],t,k=1;
    a[0]=1;
    b[0]=1;

    for(i=1;i<1000;i++)
        a[i]=1000-i+1;

    for(i=2;i<33;i++)
    {
        for(j=1;j<1000;j++)
        {
           t = divisor(a[j]);

           if(t == i)
           {
               b[k]=a[j];
               k++;
           }
        }
    }
    int p,q;
    cin >> p;
    for(i=0;i<p;i++)
    {
        cin >> q;
        printf("Case %d: %d\n",i+1,b[q-1]);
    }
}
