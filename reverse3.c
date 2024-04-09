#include<stdio.h>
void main()
{
	int num,a,b,c,reverse;
	printf("enter three digit number:");
	scanf("%d",&num);
	a=num/100;
	b=(num/10)%10;
	c=num%10;
	reverse=c*100+b*10+a;
	printf("reverse of three number=%d",reverse);
}
