//local variable and global variable
#include<stdio.h>
int glob=15;//global variable
void fun()
{
	glob=89;
}
void main()
{
	int a=12;//local variable
	a=90;
	glob=89;
}
