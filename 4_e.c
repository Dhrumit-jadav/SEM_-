#include<stdio.h>
void main()
{
	int is,h,m,s;

	printf("Input sec.=");
	scanf("%d",&is);

	h=is/3600;
	printf("hour of sec =%d\n",h);
	is=is%3600;

	m=is/60;
	printf("min of sec=%d\n",m);
	is=is%60;

	s=is;
	printf("sec =%d\n",s);

	printf("SEC in HH:MM:SS =%d:%d:%d",h,m,s);

}