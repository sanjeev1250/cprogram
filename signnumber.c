
#include <stdio.h>
int main()
{
    int sign = 0;
    int data = 0;
    printf("\n\n Enter the number  = ");
    scanf("%d",&data); //Get the number
    sign = (data > 0) - (data < 0); // check the sign of the number
    if(sign == 1)
    {
        printf("\n\n Enter number is a positve number\n");
    }
    else if(sign == -1)
    {
        printf("\n\n Enter number is a negative number\n");
    }
    else
    {
        printf("\n\n Enter number is zero\n");
    }
    return 0;
}
