//wap to find greatest number in three number using if else
#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter three number:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
	{
		printf("gratest number is =%d",num1);
	}
	else if(num2>num3&&num2>num1)
	{
		printf("greatest number=%d",num2);
	}
	else
	{
		printf("greatest number=%d",num3);
		
		
	}
}
