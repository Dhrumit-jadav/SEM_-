#include <stdio.h>
void main()
{
	int a,sum=0,c;

	printf("Enter a:");
	scanf("%d",&a);

	while(a>0)
		{
			c=a%10;
			sum=sum+c;
			a=a/10;
		}
	printf("Sum of digits=%d\n",sum);
}