#include <stdio.h>
void main()
{
	int num1,num2,num3;

	printf("Enter Number1=");
	scanf("%d",&num1);

	printf("Enter Number2=");	
	scanf("%d",&num2);

	printf("Enter Number3=");	
	scanf("%d",&num3);

	if (num1>num2)
		{
			if (num1>num3)
				{
					printf("Number1 is largest number\n");	
				}
			else
				{
					printf("Number3 is largest number\n");
				}
		}	
	else
	{
		if (num2>num3)
			{
				printf("Number2 is largest number\n");
			}
		else
			{
				printf("Number3 is largest number\n");
			}
	}	
}