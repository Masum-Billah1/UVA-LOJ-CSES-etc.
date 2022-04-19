#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,t;
    cin >> t;
    for(j=0;j<t;j++)
    {
        char a[81];
        cin >> a;
        int i,l,n;
        double s = 0;
        l = strlen(a);
        for(i=l-1;i>=0;i--)
        {
            if(a[i]>='1' && a[i]<='9' && a[i-1]>='1'&&a[i-1]<='9')
            {
                n = a[i]-'0'+(a[i-1]-'0')*10;
                i=i-2;
            }

            else if(a[i]>='1' && a[i]<='9')
            {
                n = a[i]-'0';
                i--;
            }

            else
                n = 1;
            if(a[i]=='C')
                s = s+12.01*n;
            else if(a[i]=='H')
                s = s+n*1.008;
            else if(a[i]=='O')
                s = s+n*16.00;
            else if(a[i]=='N')
                s = s+n*14.01;
        }
        printf("%0.3f\n",s);
    }
}
