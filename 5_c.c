#include <stdio.h>
void  main()
{
	int a,b;

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");	
	scanf("%d",&b);

	if (a>b)
		{
			printf("a is largest number\n");
		}

	if (b>a)
		{
			printf("b is largest number\n");
		}
}