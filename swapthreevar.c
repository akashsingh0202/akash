#include<stdio.h>
void main()
{
	int num1,num2,num3,temp;
	printf("enter value of num1:");
	scanf("%d",&num1);
	printf("enter value of num2:");
	scanf("%d",&num2);
	printf("enter value of num3:");
	scanf("%d",&num3);
	temp=num1;
	num1=num2;
	num2=num3;
	num3=temp;
	printf("swapping num1=%d\n",num1);
	printf("swapping num2=%d\n",num2);
	printf("swapping num3=%d\n",num3);
	
}
