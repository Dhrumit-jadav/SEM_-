#include<stdio.h>
void main()
{
	int a;

	printf("Enter a=");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
		printf("Day is Monday\n");
		break;

		case 2:
		printf("Day is Tuesday\n");
		break;

		case 3:
		printf("Day is Wednesday\n");
		break;

		case 4:
		printf("Day is Thrusday\n");
		break;

		case 5:
		printf("Day is Friday\n");
		break;

		case 6:
		printf("Day is Saturday\n");
		break;

		case 7:
		printf("Day is Sunday\n");
		break;
	}
}