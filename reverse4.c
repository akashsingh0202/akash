#include<stdio.h>
void main()
{
	int num,a,b,c,d,reverse;
	printf("enter four digit number:");
	scanf("%d",&num);
	a=num/1000;
	b=(num/100)%10;
	c=(num/10)%10;
	d=num%10;
	reverse=d*1000+c*100+b*10+a;
	printf("reverse of four digit number=%d",reverse);
}
