#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5,total,pre;

	printf("Enter velue of sub1 =");
	scanf("%f",&sub1);

	printf("Enter velue of sub2 =");
	scanf("%f",&sub2);

	printf("Enter velue of sub3 =");
	scanf("%f",&sub3);

	printf("Enter velue of sub4 =");
	scanf("%f",&sub4);

	printf("Enter velue of sub5 ;");
	scanf("%f",&sub5);

	total=sub1+sub2+sub3+sub4+sub5;

	printf("Total of 5 sub=%f",total);

	pre=(total/500)*100;

	printf("pre of 5 sub=%f",pre);
}