#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,d=0,e=0,f=0,i,t,z;
        cin >> n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];

        for(i=0;i<n;i++)
        {
            t = abs(a[i]-b[i]);
            if(t == 0)
                d = 1;
            else if(t != 0 && e == 0)
            {
                e = 1;
                z = t;
            }

            else if(z!=t && t!=0)
                f = 1;
        }
        if((d+e+f)<=2)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;

    }
}
