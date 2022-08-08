#include <stdio.h>
void main()
{
	int n,i,even=0,odd=0;

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
		if (a[i]%2==0)
		{
			even=even+1;
		}
		else if (a[i]%2!=0)
		{
			odd=odd+1;
		}
	}

	printf("NUM of even number:%d\n",even);
	printf("NUM of odd number:%d\n",odd);

}