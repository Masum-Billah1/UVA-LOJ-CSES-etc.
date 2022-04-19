#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        printf("Case %d:\n",i+1);
        {
            int x1,y1,x2,y2,m,j;
            cin >> x1 >> y1 >> x2 >> y2;
            cin >> m;
            for(j=0;j<m;j++)
            {
                int a,b;
                cin >> a >> b;
                if(a>=x1 && a<=x2 && b>=y1 && b<=y2)
                    printf("Yes\n");
                else
                    printf("No\n");

            }
        }
    }
    return 0;
}
