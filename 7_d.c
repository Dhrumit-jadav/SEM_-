#include <stdio.h>
void main()
{
	int num1,num2,c,ans;

	printf("Enter num1=");
	scanf("%d",&num1);

	printf("Enter num2=");
	scanf("%d",&num2);
	
	printf("Enter 1 for sum \n");
	printf("Enter 2 for sub \n");
	printf("Enter 3 for div \n");
	printf("Enter 4 for malti \n");
	printf("Enter choise=");
	scanf("%d",&c);

	if (c==1)
		{
			ans=num1+num2;
		}

	else if (c==2)
		{
			ans=num1-num2;
		} 

	else if (c==3)
		{
			ans=num1/num2;
		} 

	else if (c==4)
		{
			ans=num1*num2;
		} 
	else
		{
			printf("Enter correct choise\n");
		}	
	printf("Aswer=%d",ans );
}