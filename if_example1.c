#include<stdio.h>
void main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num==1)
	{
		printf("good morning\n");
	}
	if(num==2)
	{
		printf("good afternoon\n");
	}
	if(num==3)
	{
		printf("good evening\n");
	}
	if(num>3)
	{
		printf("please enter 1 OR 2 OR 3");
	}
}
