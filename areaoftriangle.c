#include<stdio.h>
void main()
{
	float base,height,area;
	printf("enter base of triangle:");
	scanf("%f",&base);
	printf("enter height of triangle:");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("area of triangle=%2f",area);
}
