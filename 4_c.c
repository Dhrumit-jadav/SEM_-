#include<stdio.h>
void main()
{
	float u,t,a,d;

	printf("Enter velue of u =");
	scanf("%f",&u);

	printf("Enter velue of t =");
	scanf("%f",&t);

	printf("Enter velue of a =");
	scanf("%f",&a);

	d=(u*t)+((a*t)*(a*t));

	printf("Distence=%f",d);
}