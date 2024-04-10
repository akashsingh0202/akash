#include<stdio.h>
void main()
{
	int w1,w2,n1,n2,total,average;
	printf("enter weight of two item:");
	scanf("%d%d",&w1,w2);
	printf("enter number of purchases of  first item:");
	scanf("%d",&n1);
	printf("enter number of purchases of second item :");
	scanf("%d",&n2);
	total=w1*n1+w2*n2;
	printf("total number of purchases=%d\n",total);
	average=total/2;
	printf("total average purchases=%d",average);
}
