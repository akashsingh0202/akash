#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("enter value of num1:");
	scanf("%d",&num1);
	printf("enter value of num2:");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("swapping num1=%d\n",num1);
	printf("swapping num1=%d",num2);
	
}
