#include <stdio.h>
void main()
{
	float BS,HRA,DA,GS;

	printf("Enter Basic salery=");
	scanf("%f",&BS);

	if (BS>=10000)
		{
			HRA=0.2*BS;
			DA=0.8*BS;
		}
	if (BS>=20000)
		{
			HRA=0.25*BS;
			DA=0.9*BS;
		}
	if (BS>=30000)
		{
			HRA=0.3*BS;
			DA=0.95*BS;
		}
	if (BS<10000)
		{
			printf("Enter salery more then 10000\n");
		}
	GS= BS+HRA+DA;

	printf("Grow salery=%f",GS);
}