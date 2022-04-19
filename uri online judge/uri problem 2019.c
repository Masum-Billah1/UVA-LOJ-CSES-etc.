/*Timelimit: 1
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.*/
#include<stdio.h>
int main()
{
    int N,h,m,s,p;
    scanf("%d",&N);

    h=(N/3600);
    p=N%3600;
    m=p/60;
    s=(p%60);
    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
