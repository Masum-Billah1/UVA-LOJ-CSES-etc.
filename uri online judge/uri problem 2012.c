
/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above,
 always with a corresponding message (in Portuguese) and one space between the two points and the value.
 The value calculated must be presented with 3 digits after the decimal point.*/
//area calculation
#include<stdio.h>
int main()
{
    double A,B,C,at,ac,pi=3.14159,atr,as,ar;

    scanf("%lf %lf %lf",&A,&B,&C);
    at=(A*C)/2;
    ac=pi*C*C;
    atr=(A+B)*C/2;
    as=B*B;
    ar=A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",at,ac,atr,as,ar);

    return 0;

}
