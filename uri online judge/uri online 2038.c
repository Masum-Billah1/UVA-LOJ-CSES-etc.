

/*Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay.
 This is a very simple program with the only intention of practice of selection commands.
Input

The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.
Output

The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
Input Sample 	Output Sample

3 2


Total: R$ 10.00

4 3


Total: R$ 6.00

2 3*/

#include<stdio.h>
int main()
{
    float num;
    scanf("%f",&num);
    if((0<=num)&&(num<=25))
        printf("intervalo [0,25]\n",num);
    if((25<num)&&(num<=50))
        printf("intervalo (25,50]\n",num);
    if((50<num)&&(num<=75))
        printf("intervalo (50,75]\n",num);
    if((75<num)&&(num<=100))
        printf("intervalo (75,100]\n",num);
    else
        printf("Fora de intervalo\n");

    return 0;
}

