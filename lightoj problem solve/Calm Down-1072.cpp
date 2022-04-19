#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,tc;
    cin >> test;
    tc = test;
    while(test--)
    {
        double r,rr,p,th,ta,a,b;
        int n;
        cin >>r>> n;
        th = M_PI/n;
        a = r/cos(th);
        b = 2*r*tan(th);

        ta = (r*b)/2;
        p = a+a+b;
        rr = 2*ta/p;
        printf("Case %d: %.8lf\n",tc-test,rr);
    }
}
