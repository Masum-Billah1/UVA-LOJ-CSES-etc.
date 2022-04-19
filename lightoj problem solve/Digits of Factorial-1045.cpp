#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j;
    cin >> test;
    for(j=0;j<test;j++)
    {
        int n,b,t;
        double s=0;

        cin >> n >> b;
        if( n== 0)
            s = 1;
        for(;n>=1;n--)
            s = s+log10(n);
        s = ceil(s/log10(b));
        t = s;
        printf("Case %d: %d\n",j+1,t);
    }
}
