
//salary
#include<stdio.h>
int main()
{
    int DAY,NUMBER;
    float TH,SALARY;

    scanf("%d %d %d",&NUMBER,&DAY,&TH);
    SALARY=DAY*TH;
    printf("NUMBER = %d\nSALARY = %0.2f\n",NUMBER,SALARY);

    return 0;

}
