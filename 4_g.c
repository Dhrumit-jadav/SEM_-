#include<stdio.h>
void main()
{
	int y,w,d;

	printf("Input days=");
	scanf("%d",&d);

	y=d/365;
	printf("days in years =%d\n",y);
	d=d%365;

	w=d/7;
	printf("days in weeks=%d\n",w);
	d=d%7;

	d=d;
	printf("days =%d\n",d);

	printf("days in yy:ww:dd =%d:%d:%d",y,w,d);

}