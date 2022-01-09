#include<stdio.h>

int main()
{

	int arr[7]={4,7,6,9,2,8,1};
	int i;
	int small =arr[0];

	for ( i=1;i<7;i++)
	{
		if (arr[i]<small)
		{
			small = arr[i];
		}
	}
	printf("%d",small);
	return 0;




}
