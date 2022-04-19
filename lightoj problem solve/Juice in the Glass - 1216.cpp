#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,r;
    int r1,r2,h,p;
    int i,t;
    cin >> t;
    for(i=0;i<t;i++)
    {
        a=acos(0.0)*2;
        cin >> r1>>r2>>h>>p;
        r = ((r1-r2)/h)*p+r2;
        a=(a*(r*r+r2*r2+r2*r)*p)/3;
        printf("Case %d: %lf\n",i+1,a);
    }
}
