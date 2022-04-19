/*Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.*/

//the gretest number
//rule:Maior AB=(a+b+abs(a-b))/2
#include<stdio.h>
int main()
{
    int a,b,c,MaiorAB;

    scanf("%d %d %d",&a,&b,&c);
    MaiorAB=(a+b+abs(a-b))/2;
    MaiorAB=(MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior\n",MaiorAB);

    return 0;
}
