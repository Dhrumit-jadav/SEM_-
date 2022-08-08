#include <stdio.h>
struct person
{
	char p_name[30];
	int doj;
	int salary;
};

void main()
{
	int i;
	struct person p[5];
	for (int i = 1; i <= 5; ++i)
	{
		printf("\n\nEnter Person name:");
		scanf("%s",p[i].p_name);

		printf("Enter date of joining:");
		scanf("%d",&p[i].doj);

		printf("Enter salary:");
		scanf("%d",&p[i].salary);
	}
	for (int i = 1; i <=5; ++i)
	{
		printf("\n\nName of person is %s.\n",p[i].p_name);
		printf("joining date of person is %d.\n",p[i].doj); 
		printf("salary of person is %d\n",p[i].salary);
	}
}
