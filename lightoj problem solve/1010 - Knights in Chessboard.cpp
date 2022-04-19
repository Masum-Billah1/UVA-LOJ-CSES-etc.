#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a==1||b==1)
            printf("Case %d: %d\n",i+1,a*b);
        else if(a==2||b==2)
        {

            if((a*b)%8==0)
                printf("Case %d: %d\n",i+1,(a*b)/2);
            else if(a*b%4==0)
                printf("Case %d: %d\n",i+1,(a*b)/2+2);
            else
                printf("Case %d: %d\n",i+1,(a*b)/2+1);

        }
        else if(a*b%2==0)
            printf("Case %d: %d\n",i+1,a*b/2);
        else
            printf("Case %d: %d\n",i+1,(a*b/2)+1);

    }
}
