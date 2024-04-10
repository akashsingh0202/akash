//wap to check the given number is even-positive,even-negative,odd-positive,odd-negative
#include<stdio.h>
void main()
{
	int num;
	print("enter a number:");
	scanf("%d",&num);
	if (num%2==0)
	{
		if(num>0)
		{
			printf("the number is even positive");
		}
		else
		{
			printf("the number is even negative");
		}
	else
		{
			if(num>0)
			{
				printf("the number is odd positive");
			}
			else
			{
				printf("the number is odd negative ")
			}
		}
	}
 } 
