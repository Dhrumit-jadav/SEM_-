#include <stdio.h>
void main()

{
	int a,b,c;

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	printf("Enter c=");
	scanf("%d",&c);

	if (a>b && a>c)
		{
			printf("a is largest number\n");
		}

	if (b>c && b>c)
		{
			printf("b is largest number\n");
		}

	if (c>a && c>b)
		{
			printf("c is largest number\n");
		}
}