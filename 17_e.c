#include <stdio.h>
void main()
{
	int a[3][3],b[3][3],sum=0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Enter value for a:");
			scanf("%d",&a[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Enter value for b:");
			scanf("%d",&b[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			sum=a[i][j]+b[i][j];
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t",sum);
		}
		printf("\n");
	}

}