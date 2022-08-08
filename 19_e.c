#include<stdio.h>
void A(int);
void main()
{
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	A(n);
}
void A(int x)
{
	int flag=0,i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
