#include <stdio.h>
void main()
{
	int num1,num2,sum,sub,div,malti,ch;

	printf("Enter Number1=");
	scanf("%d",&num1);

	printf("Enter Number2=");
	scanf("%d",&num2);

	sum=num1+num2;
	sub=num1-num2;
	div=num1/num2;
	malti=num1*num2;

	printf("Enter 1 for sum\nEnter 2 for sub\nEnter 3 for div\nEnter 4 for malti\n");

	printf("Enter choise=");
	scanf("%d",&ch);

	if (ch==1)
		{
			printf("Velue= %d",sum);
		}
	if (ch==2)
		{
			printf("Velue= %d",sub);
		}
	if (ch==3)
		{
			printf("Velue= %d",div);
		}
	if (ch==4)
		{
			printf("Velue= %d\n",malti);
		} 
}