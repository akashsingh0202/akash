#include<stdio.h>
void main()
{
	int years,months,weeks,days;
	printf("enter days:");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	weeks=days/7;
	days=days%7;
	printf("years=%d\n",years);
	printf("months=%d\n",months);
	printf("weeks=%d\n",weeks);
	printf("days=%d\n",days);
}
