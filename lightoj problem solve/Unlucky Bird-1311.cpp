#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;

    for(i=0;i<t;i++)
    {
        double v1,v2,v3,a1,a2,t1,t2,s1,s2,s,p;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        t1 = v1/a1;
        t2 = v2/a2;
        s1 = (v1*t1)-(0.5*a1*t1*t1);
        s2 = (v2*t2)-(0.5*a2*t2*t2);
        if(t1>=t2)
            s = v3*t1;
        else
            s = v3*t2;
        printf("Case %d: ",i+1);
        printf("%.10lf %.10lf\n",s1+s2,s);
    }
}
