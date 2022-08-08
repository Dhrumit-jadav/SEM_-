#include <stdio.h>
void main()
{
	int a,c,sum=0,temp;
	
	printf("Enter a=");
	scanf("%d",&a);
	temp=a;

	while(a>0)
		{
			c=a%10;
			sum=sum+(c*c*c);
			a=a/10;
		}
	if (temp==sum)
	{
		printf("Number is armstorg number\n");
	}
	else
	{
		printf("Number is not armstorg number\n");
	}
}