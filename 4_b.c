#include<stdio.h>
void main()
{
	float f,c;

	printf("Enter temp.in f =");
	scanf("%f",&f);

	c=(f-32)*(5.0/9.0);

	printf("Temp.in c =%f",c);
}