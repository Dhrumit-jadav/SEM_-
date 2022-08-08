#include <stdio.h>
void main()
{
	char name[10],;
	char *p;

	p=name;

	for ( name[10] = 0; name[10] < 10; ++name[10])
		{
			printf("Enter value:");
			scanf("%s",p+i);
		}
	for ( name[10] = 0; name[10] < '\0'; name[10]++)
	{
		printf("%s\n",*(p+i));
	}
}