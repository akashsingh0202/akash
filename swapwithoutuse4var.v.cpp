#include<stdio.h>
 int  main()
{
	int num1,num2,num3;
	printf("enter value of num1:");
	scanf("%d",&num1);
	printf("enter value of num2:");
	scanf("%d",&num2);
	printf("enter value of num3:");
	scanf("%d",&num3);
	num1=num1+num2+num3;
	num2=num1-num2-num3;
	num3=num1-num2-num3;
	num1=num1-num2-num3;
	printf("value of num1=%d\n",num1);
	printf("value of num2=%d\n",num2);
	printf("value of num3=%d\n",num3);
}
