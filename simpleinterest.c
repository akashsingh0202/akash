#include<stdio.h>
void main()
{
	int principle,rate,time,si;
	printf("enter value of principle:");
	scanf("%d",&principle);
	printf("enter value of rate:");
	scanf("%d",&rate);
	printf("enter value of time:");
	scanf("%d",&time);
	si=(principle*rate*time)/100;
	printf("ans ofsimple interest=%d",si);
}
