#include<stdio.h>
void main()
{
	float km,meter,cm,feet,inch;

	printf(" Enter kilometer=");
	scanf("%f",&km);

	meter=km*1000;
	cm=km*100000;
	feet=km*3280.84;
	inch=km*39370.1;

	printf("Km to meter=%f\n",meter);
	printf("Km to cm=%f\n",cm);
	printf("Km to feet=%f\n",feet);
	printf("Km to inch=%f\n",inch);
}