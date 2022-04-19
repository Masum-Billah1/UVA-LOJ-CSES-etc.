#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,d1,d2,d3,t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        d1 = abs(r2-r1);
        d2 = abs(c2-c1);
        d3 = abs(d2-d1);
        if(d3 == 0)
            printf("Case %d: %d\n",i+1,1);
        else if(d3%2 == 0)
            printf("Case %d: %d\n",i+1,2);
        else
            printf("Case %d: impossible\n",i+1);
    }
}
