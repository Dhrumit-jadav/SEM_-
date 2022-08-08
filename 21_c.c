#include <stdio.h>
void main()
{
	int a,b,temp;
	int *pa,*pb;

	pa=&a;
	pb=&b;

	printf("Enter a:");
	scanf("%d",pa);

	printf("Enter b:");
	scanf("%d",pb);

	temp=*pa;
	*pa=*pb;
	*pb=temp;
	
	printf("a=%d\n",*pa);
	printf("b=%d\n",*pb);
}