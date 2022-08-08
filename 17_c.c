#include<stdio.h>
void main()
{
	int a[20][2],i,j;

	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (j==0)
			{
				printf(" Enter roll no.");
				scanf("%d",&a[i][j]);
			}
			else
			{
				printf(" Enter marks.");
				scanf("%d",&a[i][j]);
			}
		}
	}

	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}