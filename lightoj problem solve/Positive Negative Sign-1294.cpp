#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        long long int m,n;
        cin >> m >>n;
        long long int o;
        o = n*n*(m/(2*n));

        printf("Case %d: %lld\n",i+1,o);
    }
    return 0;
}
