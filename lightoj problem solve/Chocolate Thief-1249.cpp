#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k,e;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int b,t[3],j,cnt=0,small,large,ts=0,tl=0;
        cin >> b;
        string ch[b];
        int s[b];
        for(j=0;j<b;j++)
        {
            int a1,a2,a3;
            getchar();
            cin >> ch[j];
            cin >> a1 >> a2 >> a3;
            s[j] = a1*a2*a3;
        }
        small = s[0];
        large = s[0];
        for(j=1;j<b;j++)
        {
            if(s[j]>large)
            {
                large = s[j];
                tl = j;
            }
            if(s[j]<small)
            {
                small = s[j];
                ts = j;
            }
        }
        if(small == large)
            printf("Case %d: no thief\n",i+1);
        else
        {
            printf("Case %d: ",i+1);
            cout << ch[tl]<<" took chocolate from "<<ch[ts]<<endl;
        }

    }
}
