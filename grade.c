#include<stdio.h>
void main()
{
	int per;
	printf("enter percentage of student:");
	scanf("%d",&per);
	if(per>=75 && per<=100)
	{
		printf("student got A grade");
	}
	else if(per>60 && per<75)
	{
		printf("student got B grade");
	}
	else if(per>50 && per<60)
	{
		printf("student got C grade");
	}
	else if(per>40 && per<50)
	{
		printf("student got C grade");
	}
	
}
