#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n,t=0,mvol = 0,i,vol;
        cin >> n;
        if(n == 0)
            return 0;
        int a[n][3];
        for(i=0;i<n;i++)
        {
            cin >> a[i][0]>>a[i][1]>>a[i][2];
            if(t<a[i][2])
                t = a[i][2];
        }
        for(i=0;i<n;i++)
        {
            if(a[i][2]==t)
            {
                vol = a[i][0]*a[i][1]*a[i][2];
                if(mvol<vol)
                    mvol = vol;
            }
        }
        cout << mvol <<endl;
    }

}

