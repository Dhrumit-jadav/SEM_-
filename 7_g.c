#include <stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5,avg,class;

	printf("Enter mark of sub1=");
	scanf("%f",&sub1);

	printf("Enter mark of sub2=");
	scanf("%f",&sub2);

	printf("Enter mark of sub3=");
	scanf("%f",&sub3);

	printf("Enter mark of sub4=");
	scanf("%f",&sub4);

	printf("Enter mark of sub5=");
	scanf("%f",&sub5);

	avg=(sub1+sub2+sub3+sub4+sub5)/5;

	if (avg>=70)
	{
		printf("You are in distinstion class\n");
	}
	else if (avg>=60 && avg<70)
	{
		printf("You are in fist class\n");
	}
	else if (avg>=45 && avg<60)
	{
		printf("You are in second class\n");
	}
	else if (avg>=35 && avg<45)
	{
		printf("You are in pass class\n");
	}
	else
	{
		printf("You are in fail class\n");
	}
}