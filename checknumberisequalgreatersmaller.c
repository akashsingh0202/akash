#include<stdio.h>
void main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num==100)
	{
		printf("the number is equal to 100");
	}
   else	if(num<100)
	{
		printf("the number is smaller than 100");
	}
else
	{
		printf("the number is grater than 100");
	}
}
