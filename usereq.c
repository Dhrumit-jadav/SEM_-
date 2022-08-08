#include <stdio.h>
void main()
{
	int a,b;
	char c;

	printf("Enter + for add\n");
	printf("Enter - for sub\n");
	printf("Enter / for div\n");
	printf("Enter * for malti\n");

	printf("Enter c=");
	scanf("%c",&c);

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	switch(c)
	{
		case '+':
		c=a+b;
		printf("Answer=%d",c);
		break;

		case '-':
		c=a-b;
		printf("Answer=%d",c);
		break;

		case '/':
		c=a/b;
		printf("Answer=%d",c);
		break;

		case '*':
		c=a*b;
		printf("Answer=%d",c);
		break;

		default:
		printf("Enter valid velue\n");
	}
}