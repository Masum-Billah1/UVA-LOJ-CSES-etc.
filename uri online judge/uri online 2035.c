#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A, &B, &C, &D);

    if((B > C) && ( D > A) && (C + D > A + B) && C > 0 && D >0 &&( A % 2== 0))
        printf("valores aceitos\n");
    else
        printf("valores nao aceitos\n");

    return 0;
}



