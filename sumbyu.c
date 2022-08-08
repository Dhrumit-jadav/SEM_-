#include <stdio.h>
void main()
{
	int i,a,avg,sum=0;
	
	printf("Enter number of digit:");
	scanf("%d",&a);

	while(i<=a)
		{
			printf("Enter number:");
			scanf("%d",&i);
			sum=i+sum;
			i++;
		}
	avg=sum/a;

	printf("sum=%d\n",sum );
	printf("avg=%d\n",avg );
}