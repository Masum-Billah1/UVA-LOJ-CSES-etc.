#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j;
    cin >> test;
    for(j=0; j<test; j++)
    {
        int n,s=0,a[50],i,t,m,z,c=0,d=0,e=0,f=0,k,l,cc=0;
        cin >> n;
        t = n;
        for(i=0; n>0; n/=2,i++)
        {
            a[i]= n%2;
            if(a[i]==1)
                d++;
        }
        k=i;
        z=i-1;

        for(i=0; i<z; i++)
        {
            if(a[i]==1&&a[i+1]==0)
            {
                c=1;
                a[i]=0;
                s = pow(2,i+1)-pow(2,i);
                l = i;
                for(;l>=0;l--)
                    if(a[l]==1)
                    {
                        s=s-pow(2,l);
                        cc++;
                    }
                if(cc!=0)
                s=s+(pow(2,cc)-1);
                break;
            }
        }
        s = t+s;

        if(d == 1)
            s =s*2;
        if(c == 0)
        {
            s = pow(2,z+1);
            for(i=0; d>1; d--,i++)
            {
                s = s+pow(2,i);
            }
        }

        printf("Case %d: %d\n",j+1,s);
    }

}
