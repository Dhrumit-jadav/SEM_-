#include <stdio.h> 
void main()
{
	int a,sum=0,c,temp;

	printf("Enter a=");
	scanf("%d",&a);

	temp=a;

	while(a>0)
		{
			c=a%10;
			sum=sum*10;
			sum=sum+c;
			a=a/10;
		}
	if (sum==temp)
	{
		printf("Number is palindrome number\n");
	}
	else
	{
		printf("Number is not palindrome number\n");
	}
}	