#include <stdio.h>
void swap(int*,int*);
void main()
{

	int a,b,*pa,*pb;

	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter b:");
	scanf("%d",&b);

	pa=&a;
	pb=&b;

	swap(pa,pb);

	printf("a=%d\n",a);
	printf("b=%d\n",b);
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}