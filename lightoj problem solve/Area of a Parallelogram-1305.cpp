#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int a1,a2,b1,b2,c1,c2;
        int dx,dy;
        double a,b,c,s,ar;

        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;//0 0 10 0 10 10
        dx=a1+c1-b1;
        dy=a2+c2-b2;
        a =sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
        b =sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2));
        c =sqrt((a1-c1)*(a1-c1)+(a2-c2)*(a2-c2));

        s=((a+b+c)/2);
        ar =2*sqrt(s*(s-a)*(s-b)*(s-c));

        //cout << s <<" "<<a<<" "<<b <<" "<<c<<endl;

       // printf("%0.0lf\n",ar);

        printf("Case %d: %d %d %.0lf\n",i+1,dx,dy,ar);
    }

    return 0;
}
