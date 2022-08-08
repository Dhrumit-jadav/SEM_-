#include <stdio.h>
void main()
{
	int n,i,min,max,avg,sum=0;

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

		for (int i = 0; i < n; ++i)
		{
			max=a[0];
			
			if (a[0]<a[i])
			{
				max=a[i];
			}
		}

		for (int i = 0; i < n; ++i)
		{
			min=a[0];
			
			if (a[0]>a[i])
			{
				min=a[i];
			}
		}

		avg=sum/n;

		printf("avg=%d\n",avg);
		printf("max=%d\n",max);
		printf("min=%d\n",min);
}
