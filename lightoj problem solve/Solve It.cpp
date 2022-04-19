#include<bits/stdc++.h>
using namespace std;
int main()
{

        double m,x,c;
        int p,q,r,s,t,u,i;
        while(scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) == 6)
        {
            c = 0;
            for(i=1;i<=10000;i++)
            {
                x = (double)i/10000;
                //cout <<"x="<<x <<endl;
                m = p*pow(M_E,(-x))+q*sin(x)+r* cos(x)+ s*tan(x)+t*pow(x,2)+u;
                //cout << m <<" "<< i <<endl;
                if(m<0)
                {
                    cout << x <<endl;
                    c = 1;
                    break;
                }
            }
            if(c == 0)
                cout <<"No solution"<<endl;
        }


}
