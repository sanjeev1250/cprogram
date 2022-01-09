#include<stdio.h>

int main(){

	int a,b,c;

	printf("Enter the Number1 =");
	scanf("%d",&a);

	printf("Enter the Number2 =");
	scanf("%d",&b);

	printf("Enter the Number3 =");
	scanf("%d",&c);


	if(a>b)
	{

	        	if(a>c)
			{
			printf("Gratest Number =%d",a);
		        }
	        	else
			{
			printf("Greatest Number=%d",c);
        		}
  
	}

	else if (b > c)
    {
        printf("\n Greatest number = %d \n",b);
    }
    else
    {
        printf("\n Greatest number = %d \n",c);
    }
    return 0;

}
