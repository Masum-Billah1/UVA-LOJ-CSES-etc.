//banknote
#include<stdio.h>
int main()
{
    int a[7],i,N,b;
    a[1]=100;
    a[2]=50;
    a[3]=20;
    a[4]=10;
    a[5]=5;
    a[6]=2;
    a[7]=1;
    scanf("%d",&N);
    printf("%d\n",N);
    i=1;
    while(N<1000000)
        if(i<8)
        {
            {
            b=N/a[i];
            printf("%d nota(s) de R$ %d,00\n",b,a[i]);
            N=N%a[i];
            i++;
            }
        }

    return 0;
    }
