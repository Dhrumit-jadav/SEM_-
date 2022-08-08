#include <stdio.h>
void main()
{
	int a,i1,i2,sum;

	printf("Enter a:");
	scanf("%d",&a);
	
	i1=a;
	i2=(a%10);

	while(i1>=10)
	{
		i1=i1/10;
	}

	sum=i1+i2;

	printf("Sum of first and last digit =%d\n",sum);
}