//wap to check the given no is zero positive negative
#include<stdio.h>
void main()
{
    int num;
    printf ("enter a number:");
    scanf("%d",&num);
    if(num==0)
    {
    printf("the number is zero");
    }
    else if(num>0)
    {
        printf("the number is positive");
    
    }
    else
    {
        printf("the number is negative");

    }
}
