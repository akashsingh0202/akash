#include<stdio.h>
void main()
{
	int hours,minutes,seconds;
	printf ("enter seconds:");
	scanf("%d",&seconds);
	hours=seconds/3600;
	minutes=(seconds%3600)/60;
	seconds=(seconds%3600)%60;
	printf("hours=%d\n",hours);
	printf("minutes=%d\n",minutes);
	printf("seconds=%d\n",seconds);
		
	
}

