#include<bits/stdc++.h>
using namespace std;
long long int a[20];
int main()
{
    int t,i;
    cin >> t;
    long long int b[20],fact=1,n,j,z=0;
    a[0]=1;
    for(i=1;i<20;i++)
    {
        fact = fact*i;
        a[i]=fact;
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<20;j++)
            b[j]=0;
        cin >>n;
         for(j=19;j>=0;j--)
        {
            if(n>=a[j])
            {
                z=j;
                break;
            }
        }
        for(j=19;j>=0;j--)
        {
            if(n>=a[j])
            {
                b[j]=1;
                n=n-a[j];
            }
        }
        if(n!=0)
            printf("Case %d: impossible\n",i+1);
        else
        {
            printf("Case %d: ",i+1);
            for(j=0;j<20;j++)
            {
                if(b[j]==1)
                {
                    if(j==z)
                        cout <<j<<"!";
                    else
                        cout <<j<<"!+";
                    b[j]=0;
                }
            }
            cout <<endl;
        }
    }
}
