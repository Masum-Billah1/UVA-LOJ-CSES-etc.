#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    double a,m,b[t];
    m = acos (0.0)*2;
    for(i=0;i<t;i++){
        cin >> a;
        b[i]=((4*a*a)-(m*a*a));
    }
    for(i=0;i<t;i++)
        printf("Case %d: %0.2f\n",i+1,b[i]);

    return 0;
}
