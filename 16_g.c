#include <stdio.h>
void main()
{
	int n,avg,high=0,sum=0;

		printf("Enter n:");
		scanf("%d",&n);

		int a[n];
		
		for (int i = 0; i < n; ++i)
			{
				printf("Enter value:");
				scanf("%d",&a[i]);
			}
		
		for (int i = 0; i < n; ++i)
		{
			sum=sum+a[i];
		}

		avg=sum/n;

		for (int i = 0; i < n; ++i)
		{
			if (avg<a[i])
			{
				high=high+1;
			}
		}

		printf("Thare ars %d numbers id higher than avg\n",high);
}
