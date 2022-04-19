#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,k,i,j,l,p,o,e=0,cnt=0,x,z,f,ll;
    cin >>t;
    for(i=0;i<t;i++)
    {
        cin >> n>>m>>k;
        char a[n][k];
        int b[n][k];
        int d[n][m];

        for(j=0;j<n;j++)
        {
            for(l=0;l<m;l++)
            {
                d[j][l]=l+1;
            }
        }
        for(j=0;j<n;j++)
        {
            for(l=0;l<k;l++)
            {
                getchar();
                cin >> a[j][l];
                cin >> b[j][l];
                if(a[j][l]=='-')
                    d[j][b[j][l]-1]=0;
            }
        }

        for(j=0;j<n;j++)
        {
            for(l=0;l<k;l++)
            {
                if(a[j][l]=='+')
                    d[j][b[j][l]-1]=b[j][l];
            }
        }
        cin >> p;
        int c[p];
        for(j=0;j<p;j++)
            cin >>c[j];

         for(j=0;j<n;j++)
        {
           ll=cnt;
           for(x=0;x<k;x++)
           {
               t=b[j][x];
               for(z=0;z<k;z++)
                    if(t==b[j][z])
                   {
                       cnt++;
                       break;
                   }
           }
            for(l=0;l<k;l++)
            {
                t = b[j][l];
                for(f=0;f<k;f++)
                    if(t==b[j][f] && a[j][l]!=a[j][f])
                        cnt++;
            }
            if(ll==cnt)
                for(o=0;o<p;o++)
                    for(l=0;l<m;l++)
                    {
                        if(c[o]==d[j][l])
                            e++;
                    }
                if(e==p)
                {
                    cnt++;
                    e=0;
                }
        }
        if(cnt == n)
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);

        cnt=0;
    }
}
