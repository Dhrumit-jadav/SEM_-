#include <stdio.h>
void main()
{
	int a=9422;
	int *ptr;

	ptr= &a;

	printf("value =%d\n",*ptr);
	printf("Address =%d\n",ptr);
}