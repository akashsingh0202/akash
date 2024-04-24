#include<stdio.h>
void main()
{
	int num1,num2,num3,ans;
	printf("enter three number:");
	scanf("%d%d%d",&num1,&num2,&num3);
	ans=num1>num2&&num1>num3?num1:(num2>num3&&num2>num1?num2:num3);
	printf("the greatest number=%d",ans);
}
