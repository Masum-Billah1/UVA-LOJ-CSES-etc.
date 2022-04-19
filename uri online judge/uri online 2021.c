
//banknote
#include<stdio.h>
int main()
{
    float a[7],i;
    int b,c;
    float N;
    a[1]=100.0;
    a[2]=50.0;
    a[3]=20.0;
    a[4]=10.0;
    a[5]=5.0;
    a[6]=2.0;
    a[7]=1.00;
    a[8]=0.50;
    a[9]=0.20;
    a[10]=0.10;
    a[11]=0.05;
    scanf("%f",&N);
    printf("Notas:\n");
    i=1;
    while(N<1000000.00)
        if(i<7)
        {


            b=N/a[i];
            printf("%d nota(s) de R$ %f\n",b,a[i]);
            N=N-(b*a[i]);
            i++;

        }
     printf("Moedas:\n");
     i=7;
     while(N>101)
        if(i<12)
     {
         c=N/a[i];
         printf("%d nota(s) de R$ %f\n",c,a[i]);
         N=N-(b*a[i]);
         i++;
     }







    return 0;
    }
