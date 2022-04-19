#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    cin >> test;
    for(i=0;i<test;i++)
    {
        int n,p,q,j,c = 0,s = 0;
        cin >> n >> p >> q;
        int a[n];
        for(j=0;j<n;j++)
            cin >> a[j];
        if(n<p)
            p = n;
        for(j=0;j<n;j++)
        {
            s = s+a[j];
            if(s<=q)
                c++;
            else
                break;
        }
        if(c>p)
            printf("Case %d: %d\n",i+1,p);
        else
            printf("Case %d: %d\n",i+1,c);
    }

}
