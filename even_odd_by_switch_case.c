#include<stdio.h>
void main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	switch(num%2!=0)
	{
		case 1:printf("odd");break;
   
		case 2:printf("even"); break;
	}
}
