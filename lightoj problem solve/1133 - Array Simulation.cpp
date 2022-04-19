#include<bits/stdc++.h>
using namespace std;
int main()
{
    int o,i,n,m,j,t,k;
    char ch;
    cin >> o;
    for(i=0;i<o;i++)
    {
        cin >> m >> n;
        int a[m];
        for(j=0;j<m;j++)
            cin >> a[j];

        for(j=0;j<n;j++)
        {
            getchar();
            int b,c;
            cin >> ch;
            if(ch=='S')
            {
                cin >> b;
                for(k=0;k<m;k++)
                {
                    a[k]=a[k]+b;
                }

            }
            else if(ch == 'M')
            {
                cin >> b;
                for(k=0;k<m;k++)
                    a[k]=a[k]*b;
            }
            else if(ch == 'D')
            {
                cin >> b;
                for(k=0;k<m;k++)
                    a[k]=a[k]/b;
            }
            else if(ch == 'R')
            {
               reverse(a,a+m);
            }
            else if(ch == 'P')
            {
                cin >> b >> c;
                t = a[b];
                a[b]=a[c];
                a[c]=t;
            }

        }
        printf("Case %d:\n",i+1);
         for(k=0;k<m;k++)
         {
             cout <<a[k];
             if(k!=m-1)
                cout<<" ";
         }

            cout <<endl;
    }
}
