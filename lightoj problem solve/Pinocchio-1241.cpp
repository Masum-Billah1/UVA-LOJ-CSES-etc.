#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,c=0,d;
    cin >> t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin >> n;
        int a[n];
        for(j=0;j<n;j++)
            cin >> a[j];

        d=a[0]-2;
        if(d==0)
            c=c;
        else if(d%5==0)
            c=c+d/5;
        else
            c = c+d/5+1;
        for(j=0;j<n-1;j++)
        {
            d=a[j+1]-a[j];
            if(d==0)
                c=c;
            else if(d%5==0)
                c=c+d/5;
            else
                c = c+d/5+1;
        }
        printf("Case %d: %d\n",i+1,c);
    }
}
