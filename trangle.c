#include <stdio.h>
int main()
{
    int Side1, Side2, Side3;
    /* Get sides of a triangle from the user */
    printf("\n Enter first side of triangle: = ");
    scanf("%d", &Side1);
    printf("\n Enter second side of triangle: = ");
    scanf("%d",&Side2);
    printf("\n Enter third side of triangle: = ");
    scanf("%d",&Side3);
    if((Side1==Side2) && (Side2==Side3))
    {
       
        printf("\n Equilateral triangle.\n\n");
    }
    else if((Side1==Side2) || (Side1==Side3) || (Side2==Side3))
    {
       
        printf("\n Isosceles triangle.\n\n");
    }
    else
    {
       
        printf("\n Scalene triangle.\n\n");
    }
    return 0;
}
