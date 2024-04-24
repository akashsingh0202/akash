//wap to check the voter is eligible or not
#include<stdio.h>
void main()
{
int age;
printf("enter age of candidate : ");
scanf("%d",&age);
if(age>=18)
{
	printf("the candidate is eligible for casting vote");
}
else
{
	printf("the candidate is not eligible for casting vote");
}
}
