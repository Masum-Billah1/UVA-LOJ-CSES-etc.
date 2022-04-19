//salary
#include<stdio.h>
int main()
{
    int DAY,NUMBER;
    float TH,SALARY;

    scanf("%d %d %f",&NUMBER,&DAY,&TH);
    SALARY=DAY*TH;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",NUMBER,SALARY);

    return 0;

}
