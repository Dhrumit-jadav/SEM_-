#include <stdio.h>
#include <math.h>
void main()
{
	float x,j,fact,i,n,sum=0;
	
	printf("Enter n:");
	scanf("%f",&n);

	printf("Enter x:");
	scanf("%f",&x);

	for (int i=1; i<=n; i++)
	{
		fact=1;
		for (int j=1; j<=n; j++)
		{
			fact=fact*j;
		}
		if (i%2==0)
			{
				sum=sum-(pow(x,i)/fact);
			}
		else
			{
				sum=sum+(pow(x,i)/fact);
			}
	}
	printf("%f\n",sum);
}