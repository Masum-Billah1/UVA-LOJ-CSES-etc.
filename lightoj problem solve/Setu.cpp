#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j;
    cin >> test;
    for(j=0;j<test;j++)
    {
        int n,s=0,i;
        cin >> n;
        printf("Case %d:\n",i+1);
        for(i=0;i<n;i++)
        {
            getchar();
            char b[10];
            int a;
            cin >> b;
            if(strcmp(b,"donate")==0)
            {
                cin >> a;
                s = s+a;
            }
            if(strcmp(b,"report")==0)
                cout << s <<endl;
        }
    }

}
