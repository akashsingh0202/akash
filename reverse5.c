#include <stdio.h>
void main()
{
	int a,b,c,d,e,num,reverse;
	printf("enter five digit number:");
	scanf("%d",&num);
	a=num/10000;
	b=(num/1000)%10;
	c=(num/100)%10;
	d=(num/10)%10;
	e=num%10;
	reverse=e*10000+d*1000+c*100+b*10+a;
	printf("reverse number=%d",reverse);
}
