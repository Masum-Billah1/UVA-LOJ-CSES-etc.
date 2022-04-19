//salary with bonos
#include<stdio.h>
int main()
{
    char name;
    double a,b,total;
    scanf("%s %lf %lf",&name,&a,&b);
    total=a+(b*15)/100;
    printf("TOTAL = R$ %0.2lf",total);
    return 0;


}
