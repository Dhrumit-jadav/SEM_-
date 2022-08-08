#include <stdio.h>
void main()
{
	float BS,GS,HRA,DA;

	printf("Enter basic selary=");
	scanf("%f",&BS);

	if (BS>=30000)
		{
			HRA=0.3*BS;
			DA=0.95*BS;
		}

	else if (BS>=20000)
		{
			HRA=0.25*BS;
			DA=0.9*BS;
		}	
	else if (BS>=10000)
		{
			HRA=0.2*BS;
			DA=0.8*BS;
		} 
	else
		{
			printf("Enter dalery more than 10000/n");
		}
	GS=BS+HRA+DA;
	printf("Grow salery=%f\n",GS);
}