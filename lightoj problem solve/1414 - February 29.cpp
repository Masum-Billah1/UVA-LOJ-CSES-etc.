#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    getchar();
    char a1[25],a2[25],b1[25],b2[25];
    long long int a3,b3,m,c,d,z,y=0,x1,x2,n;
    for(i=0;i<t;i++)
    {
        c=0;
        d=0;
        cin >> a1 >>a2 >>a3;
        cin >>b1>>b2>>b3;
        z=(b3-a3)/4;
        x1=a3/100;
        x2=b3/100;

        y = (x2-x1);
        for(n=x1;n<=x2;n++)
            if(strcmp(a1,"January")==0||strcmp(a1,"February")==0&&a3%400==0)
            {
                y--;
            }

        if((a3%400==0)||((a3%100!=0)&&(a3%4==0)))
            c=1;

        if((strcmp(a1,"January")==0||(strcmp(a1,"February")==0))&&c==1)
        {
            a3=a3-4;
        }
        if(c!=1)
        {
            a3=a3/4;
            a3=a3*4;
        }

        if((b3%400==0)||((b3%100!=0)&&(b3%4==0)))
            d=1;
        if(((strcmp(b1,"January")==0||strcmp(b1,"February")==0))&&d==1)
        {
            b3=b3-4;

            if(strcmp(b2,"29,")==0&&strcmp(b1,"February")==0)
                b3=b3+4;
        }
        if(d==0)
        {
            b3=b3/4;
            b3=b3*4;
        }
       // cout <<"b3="<<b3<<endl<<"a3="<<a3<<endl;
        printf("Case %d: ",i+1);
        cout << z-y <<endl;

    }

}
