
/*If the point is2.5 -2.at the origin, write the message "Origem".

If the point is over X axis write "Eixo X", else if the point is over Y axis write "Eixo Y".
Input

The input contains the coordinates of a point.
Output

The output should display the quadrant in which the point is.
Input Sample 	Output Sample

4.5 -2.2           Q4
0.1 0.1            Q1
0.0 0.0            */
#include <stdio.h>
int main()
{
    float x,y;

    scanf("%f %f",&x,&y);
    if(x==0.0 && y==0.0)
        printf("origem\n");
    else if(y==0.0 && x !=0)
        printf("EIXO X\n");
    else if(x==0.0 && y !=0)
        printf("EIXO Y\n");
    else if(x>0.0&&y>0.0)
         printf("Q1\n");
    else if(x<0.0&&y>0.0)
        printf("Q2\n");
    else if(x<0.0&&y<0.0)
        printf("Q3\n");
    else if(x>0.0&&y<0.0)
        printf("Q4\n");

    return 0;
}


