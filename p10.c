#include <stdio.h>
void main()
{
	int n,i;

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
			printf("%d\n",a[i]);
		}
}