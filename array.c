#include <stdio.h>
void main()
{
	int *pa,a[10],sum=0;
	
	pa=a;
	
	for (int i = 0; i < 10; ++i)
		{
			printf("Enter value:");
			scanf("%d",pa+i);
		}
	for (int i = 0; i < 10 ; i++)
		{
			printf("%d\n",*(pa+i));
			sum=sum+*(pa+i);
		}
	printf("Sum=%d\n",sum);

}