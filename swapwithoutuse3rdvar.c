#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter value of num1:");
	scanf("%d",&num1);
	printf("enter value of num2:");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("value of num1=%d\n",num1);
	printf("value of num2=%d",num2);
}
