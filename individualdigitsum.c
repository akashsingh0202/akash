#include<stdio.h>
void main()
{
	int num, r,s,t,sum;
	printf("enter a three digit number:");
	scanf("%d",&num);
	r=num/100;
	s=(num/100)%10;
	t=num%10;
	sum=r+s+t;
	printf ("sum of three individual digit=%d",sum);
	
}
