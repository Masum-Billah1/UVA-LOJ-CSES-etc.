#include<bits/stdc++.h>
using namespace std;
double a[200];
int main()
{
    int i,k=0;
    double s = 0;
    for (i=1;i<=1000000;i++)
    {
        s = s + log10(i);
        if( i%10000==0)
        {
            a[k] = s;
            k++;
        }
    }
    long long int sum = 0;
    int test,j,temp;
    cin >> test;
    for(j=0;j<test;j++)
    {
        int n,b,t,c=0;
        double sum = 0;

        cin >> n >> b;
        if(n == 0)
            sum = 1;
        for(i=99;i>=0;i--)
        {
            if(n>=((i+1)*10000))
            {
                sum = a[i];
                temp = a[i];
                c=1;
                break;
            }
        }
        if(c == 0)
        {
            temp = 0;
        }
        for(;n>temp;n--)
            sum = sum+log10(n);
        sum = sum/log10(b);
        sum = ceil(sum);
        printf("Case %d: %.0lf\n",j+1,sum);
    }
}

