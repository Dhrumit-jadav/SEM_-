#include <stdio.h>
void main()
{
	char d;

	printf("Enter Digit=");
	scanf("%c",&d);

	if (d>='a' && d<='z')
		{
			printf("Given Digit is Small letter\n");
		}

	else if (d>='A' && d<='Z')
		{
			printf("Given Digit is Capital letter\n");
		}

	else if (d>='0' && d<='9')
		{
			printf("Given Digit is Number\n");
		}

	else
		{
			printf("Given Digit is Special charecatar\n");
		}
}