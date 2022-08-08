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

	if (a==b && a==c)
		{
			printf("Triangle is equilateral\n");
		}

	else if ((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || ((b*b)+(c*c))==(a*a))
		{
			printf("Triangle is right Triangle\n");
		}

	else if (a!=b && a!=c && b!=c)
		{
			printf("Triangle is scanal\n");
		}

	else if ((a==b)!=c || (a==c)!=b || ((b==c)!=a))
		{
			printf("Triangle is isoscals\n");
		}
}