/*the formula to creat the areaa of a circumference is defined as A = pie . R*R.considering to this problem that pie = 3.1416
input;CONTAINS the value of floating point(double),that is the variable description
output:present the message A= followed by the value of the veriable,as in the example bellow,with four places after
the decemal point.use all double precision variables.Like all the problems,donot forget the end line after the result*/
#include<stdio.h>
int main()
{

    double pi=3.14159,R,A;
    scanf("%lf",&R);
    A=pi*R*R;
    printf("A=%0.4lf\n",A);

    return 0;
}
