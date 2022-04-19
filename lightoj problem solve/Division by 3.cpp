#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    cin >> test;
    for(i=0;i<test;i++)
    {
        long long a1,a2,d,s=0;
        cin >> a1 >> a2;
        d = (a2-a1)/3;
        d = d*2;                 //6
        if(a1%3==0 && a2%3 == 0)             //7
            s = d+1;                        // 8
        if(a1%3==0 && a2%3 == 1)             //9
            s = d+1;                        //10
        if(a1%3==0 && a2%3 == 2)            //11
            s = d+2;                        //12
        if(a1%3==1 && a2%3 == 0)
            s = d+2;
        if(a1%3==1 && a2%3 == 1)
            s = d;
        if(a1%3==1 && a2%3 == 2)
            s = d+1;
        if(a1%3==2 && a2%3 == 0)
            s = d+2;
        if(a1%3==2 && a2%3 == 1)
            s = d+2;
        if(a1%3==2 && a2%3 == 2)
            s = d+1;
        printf("Case %d: %lld\n",i+1,s);

    }
}
