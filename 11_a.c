#include <stdio.h>
void main()
{
	int x,y,a,ab=1;

	printf("Enter x:");
	scanf("%d",&x);

	printf("Enter y:");
	scanf("%d",&y);

	a=1;

	while(a<=y)
	{
		ab=ab*x;
		a++;
	}
	printf("ab=%d\n",ab);
}