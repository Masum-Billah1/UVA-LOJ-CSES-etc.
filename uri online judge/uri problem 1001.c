/*read 2 verible named A,B and make the sum of these 2 veriables.assinging its result to the veriable X.print X as
shown below.print endline after the result otherwise you will get presantation error
input:the input will contain 2int.number
output:print the letter X9=(uppercase)with a blank space before and after the equal signal followed by the value of x*/
#include<stdio.h>
int main()
{

    int A,B,X;
    scanf("%d %d",&A,&B);
    X=A+B;
    printf("X = %d\n",X);


    return 0;
}
