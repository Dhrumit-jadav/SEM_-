#include<stdio.h>
void main()
{
	int p,r,n,intrst;
	
	printf("Enter price=",);
	sacnf("%d",&p);

	printf("Enter R=",);
	sacnf("%d",&r);

	printf("Enter n=",);
	sacnf("%d",&n);

	intrst=(p*r*n)/100;

	printf("Intrst=%d\n",intrst);
}