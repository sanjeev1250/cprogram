#include <stdio.h>
int main()
{
    int data;
 
    printf("\n Enter any number: = ");
    scanf("%d", &data);
    
 
    if((data % 2) == 0)
    {
        printf("\n Number is Even.\n\n");
    }
    else
    {
        printf("\n Number is Odd.\n\n");
    }
    return 0;
}
