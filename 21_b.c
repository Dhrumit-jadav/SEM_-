#include <stdio.h>
void main()
{
	int a,b,sum;
	int *pa,*pb;

	pa=&a;
	pb=&b;

	printf("Enter a:");
	scanf("%d",&*pa);

	printf("Enter b:");
	scanf("%d",&*pb);

	sum=*pa+*pb;

	printf("Sum=%d",sum);
}