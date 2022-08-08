#include <stdio.h>

float I(float,float,float);
void main()
{
	float p,r,n;
	
	printf("Enter p=");
	scanf("%f",&p);

	printf("Enter r=");
	scanf("%f",&r);

	printf("Enter n=");
	scanf("%f",&n);

	printf("simple interst=%f",I(p,r,n));
}

float I(float p,float r,float n)

{
	return (p*r*n)/100;
}