#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    long long m,i;
    cin >> m;
    for(i=0;i<m;i++)
    {
        long long a,x,y,t;
        cin >> a;
        long long r = sqrt(a);
        if(a == r*r)
        {
            if(r%2 == 0)
            {
                x = r;
                y = 1;
            }
            else
            {
                y=r;
                x = 1;
            }
        }
        else
        {
            r++;
            t = (r*r-a);
            if(r%2 == 0)
            {
                r--;
                if(t>=r)
                {
                    y = 1+r;
                    t=t-r;
                }

                else
                {
                    y = 1+t;
                    t = 0;
                }
                x = r+1-t;
            }
            else
            {
                 r--;
                if(t>=r)
                {
                    x = 1+r;
                    t=t-r;
                }

                else
                {
                    x = 1+t;
                    t = 0;
                }
                y = r+1-t;
            }
        }
        printf("Case %lld: %lld %lld\n",i+1,x,y);

    }
    getch();
}

