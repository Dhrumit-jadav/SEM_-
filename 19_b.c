#include<stdio.h>
void sum(int);
void main()
{
	int i,n,m;
	printf("Enter n=");
	scanf("%d",&n);
	printf("Enter m=");
	scanf("%d",&m);
	sum(n);
	sum(m);
}
void sum(int x)
{
	int sum1=0,i;
	for(i=1;i<=x;i++)
	{
		sum1=sum1+i;
	}
	printf("%d",sum1);
}
