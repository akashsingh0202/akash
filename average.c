#include<stdio.h>
void main()
{
	int rollno,hindi,english,maths,total,average;
	printf("enter students roll no:");
	scanf("%d",&rollno);
	printf("enter students marks in hindi:");
	scanf("%d",&hindi);
	printf("enter students marks in english:");
	scanf("%d",&english);
	printf("enter students marks in maths:");
	scanf("%d",&maths);
	total=hindi+english+maths;
	printf("total marks obtain by students=%d\n",total);
	average=total/3;
	printf("average marks obtain by student=%d ",average);
	
	
	
}
