#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        double ox,oy,ax,ay,bx,by;
        cin >> ox>>oy>>ax>>ay>>bx>>by;
        double a,b,c;
        a = (ox-ax)*(ox-ax)+(oy-ay)*(oy-ay);
        a=sqrt(a);
        c = ((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        c=sqrt(c);

        b=acos(((2*a*a-c*c)/(2*a*a)));
        printf("Case %d: %lf\n",i+1,b*a);
    }
}
