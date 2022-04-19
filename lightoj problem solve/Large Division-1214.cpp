#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,t;
    cin >> test;
    for(t=0; t<test; t++)
    {
        char a[202];
        cin >> a;
        int b,i;
        long long int s=0;
        cin >> b;
        if(b<0)
            b = -b;

        for(i=0; i<strlen(a); i++)
        {
            s = s*10;
            if(a[i]!='-')
                s = s+a[i]-'0';
            if(s>=b)
                s = s % b;
        }
        if(s == 0)
            printf("Case %d: divisible\n",t+1);
        else
            printf("Case %d: not divisible\n",t+1);
    }
}
