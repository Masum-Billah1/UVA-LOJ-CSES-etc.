#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l,l1,l2,e;
    cin >> t;
    for(i=0;i<t;i++)
    {
        char a[101],b[101];
        int c[26]={0};
        int d[26]={0};
        getchar();
        scanf("%[^\n]",a);
        getchar();
        scanf("%[^\n]",b);
        l1=strlen(a);
        l2=strlen(b);

        for(j=0;j<l1;j++)
        {
            if(a[j]>='a'&&a[j]<='z')
            {
                //if(a[j]!=' ')
                a[j]=a[j]-32;
            }
        }

        for(j=0;j<l1;j++)
        {
            if(a[j]>='A'&&a[j]<='Z')
            {
                //if(a[j]!=' ')
                c[a[j]-'A']++;
            }
        }

        for(j=0;j<l2;j++)
        {
            if(b[j]>='a'&&b[j]<='z')
            {
                //if(b[j]!=' ')
                b[j]=b[j]-32;
            }
        }
        for(j=0;j<l2;j++)
        {
            if(b[j]>='A'&&b[j]<='Z')
            {
                //if(b[j]!=' ')
                d[b[j]-'A']++;
            }
        }

        for(j=0;j<26;j++)
        {
            if(c[j]!=d[j])
                break;
        }
        if(j==26)
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);
    }
}
