#include <stdio.h>
void  main()
{
	int num;

	printf("Enter number =");
	scanf("%d",&num);

	if (num>0)
		{
			printf("Number is positive\n");
		}
	
	if (num==0)
		{
			printf("Number is zero\n");
		}

	if (num<0)
		{
			printf("Number is negetive\n");
		}
}