/*Read two integer values A,B.after this calculate the sum between them & assign it to the variable SOMA
input:the input file contains two integer numbers
Output:print the value SOMA with all capital letters,with the blank space before &after the equal sign followed by
the corosponding value to the sum of A and B.Like all the problems,donot forget to print end line .*/
#include<stdio.h>
int main()
{
   int A,B,SOMA;

   scanf("%d %d",&A,&B);
   SOMA=A+B;
   printf("SOMA = %d\n",SOMA);

    return 0;

}
