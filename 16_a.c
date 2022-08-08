#include <stdio.h>
void main()
{
	int n,i,pos=0,neg=0,zero=0;

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
		if (a[i]<0)
		{
			pos=pos+1;
		}
		else if (a[i]>0)
		{
			neg=neg+1;
		}
		else
		{
			zero=zero+1;
		}
	}

	printf("NUM of positive number:%d\n",pos);
	printf("NUM of negetive number:%d\n",neg);
	printf("NUM of zero number:%d\n",zero);
}