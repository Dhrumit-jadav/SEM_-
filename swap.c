#include <stdio.h>
void main()

{
	int a,b,temp;

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	temp=a;
	a=b;
	b=temp;

	printf("a=%d",a);
	printf("b=%d",b);
}