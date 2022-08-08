#include <stdio.h>
void main()
{
	int y;
	printf("Enter year=");
	scanf("%d",&y);

	if (y%4==0 && y%100!=0)
		{
			printf("Given year is leapyear\n");
		}
	
	else if (y%400==0)
		{
			printf("Given year is leapyear\n");
		}

	else
		{
			printf("Given year is not leapyear\n");
		}
}