#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,a[20],m[20]= {0},fact=1,n,p,j,t;
    cin >> p;
    a[0]=1;
    for(i=1; i<20; i++)
    {
        fact=fact*i;
        a[i]=fact;
    }
    for(j=0; j<p; j++)
    {
        cin >> n;
        for(i=19; i>=0; i--)
        {
            if(a[i]<=n)
            {
                n=n-a[i];
                cout << n <<endl;
                m[i]=1;
                t=i;
                if(n==0)
                    break;
            }
        }
        if(n!=0)
            printf("Case %d: impossible\n",j+1);
        else
        {
            printf("Case %d: ",j+1);
            for(i=0; i<19; i++)
                if(m[i]==1)
                {
                    cout << i<<"!+";
                }
            cout <<endl;
        }}}

