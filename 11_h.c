#include <stdio.h>
void main()
{
	int i=2,a,flag=0;

	printf("enter a:");
	scanf("%d",&a);

	while(i<=n/2)
	{
		if (a%i==0)
		{
			flag=1;
			brake;
		}
		i++;
	}
	if (flag==0)
	{
		printf("%d is prime number\n",a);
	}
	else
	{
		printf("%d is not prime number\n",a);
	}
}