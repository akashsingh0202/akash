#include<stdio.h>
void main()
{
	int num,c;
	float a,b;
	printf("press 1 for convert weight kilogram into gram:\n");
	printf("press 2 for convert currency indian rupees into dollar:\n");
	printf("press 3 for convert days into year,month,week:\n");
	printf("press 4 for convert distance meter into kilometer:\n");
	printf("enter a number :");
	scanf("%d",&num);
	switch (num)
	{
		case 1:	
		printf("enter weight in kilogram:");
		scanf("%f",&a);
		b=a*1000;
		printf("weight in gram =%.2f",b);
		break;
		case 2:
		printf("enter currency in indian rupees:");
		scanf("%f",&a);
		b=a/83.59;
		printf("currency in dollar =%.2f",b);
		break;
		case 3:
		printf("enter days :");
		scanf("%d",&num);
		a=num/365;
	    num=num%365;
	    b=num/30;
	    num=num%30;
	    c=num/7;
    	num=num%7;
	    printf("years=%.0f\n",a);
	    printf("months=%.0f\n",b);
    	printf("weeks=%d\n",c);
    	printf("days=%d\n",num);
		break;
		case 4:
		printf("enter distance in kilometer:");
		scanf("%f",&a);
		b=a*1000;
		printf("distance in meter =%.2f",b);
		break;
		default :printf("please press 1 to 4");
	}

}
	
