#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    double r1,r2,r3,ta,th1,th2,th3,a,b,c,ca,d;
    for(i=0;i<t;i++)
    {
        cin >> r1 >> r2 >>r3;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;
        d=r1+r2+r3;
        ta = sqrt(d*(d-a)*(d-b)*(d-c));

        th1 = acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        th2 = acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        th3 = acos(((c*c)+(b*b)-(a*a))/(2*c*b));

        ca = 0.5*(r1*r1*th1+r2*r2*th2+r3*r3*th3);

        printf("Case %d: %lf\n",i,ta-ca);
    }
}
