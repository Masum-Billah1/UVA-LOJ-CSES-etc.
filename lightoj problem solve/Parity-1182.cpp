#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,j;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int c = 0;
        long long int a;
        cin >> a;
        for(j=0;a>0;j++)
        {
            if(a%2 == 1)
                c++;
            a=a/2;
        }
        if(c%2==0)
            printf("Case %d: even\n",i+1);
        else
            printf("Case %d: odd\n",i+1);

    }
}
