#include <stdio.h>
void main()
{
	int num,re;

	printf("Enter number=");
	scanf("%d",&num);

	re=num%10;

	printf("Reminder=%d\n",re);

	if (num%2==0)
		{
			printf("last digit is Even\n");
		}
	else
		{
			printf("last digit is Odd\n");
		}
}