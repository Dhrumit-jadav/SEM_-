#include <stdio.h>
void main()
{
	float i,a,sum=0;

	printf("enter the ending number:");
    scanf("%f", &a);

    i=1;

    while(i<=a)
    {
    	sum=sum+(1/i);
    	i++;
    }
    printf("Sum of %f number=%f\n",a,sum );
}