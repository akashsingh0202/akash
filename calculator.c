#include<stdio.h>
void main()
{
	int num,a,b,ans;
	printf("welcome my calculator:\n");
	printf("press 1 for addition:\n");
	printf("press 2 for substraction:\n");
	printf("press 3 for multiplication:\n");
	printf("press 4 for division:\n");
	printf("press number:\n");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
	    printf("you choose addition:\n");
		printf("enter first number:");
		scanf("%d",&a);
		printf("enter second number:");
		scanf("%d",&b);
		ans=a+b;
		printf("%d + %d = %d\n",a,b,ans);
		break;
		case 2:
	    printf("you choose substraction:\n");
		printf("enter first number:");
		scanf("%d",&a);
		printf("enter second number:");
		scanf("%d",&b);
		ans=a-b;
		printf("%d - %d = %d\n",a,b,ans);
		break;
		case 3:
	    printf("you choose multiplication\n");
		printf("enter first number:");
		scanf("%d",&a);
		printf("enter second number:");
		scanf("%d",&b);
		ans=a*b;
		printf("%d * %d = %d",a,b,ans);
		break ;
		case 4:
	    printf("you choose division\n");
		printf("enter first number:");
		scanf("%d",&a);
		printf("enter second number:");
		scanf("%d",&b);
		ans=a/b;
		printf("%d / %d = %d\n",a,b,ans);
		break;
		
	}
}
