#include<stdio.h>
void main()
{
	int amount,note500,note200,note100,note50,note20,note10,note5,note2,note1;
	printf("enter amount:");
	scanf("%d",&amount);
	note500=amount/500;
	amount=amount%500;
	note200=amount/200;
	amount=amount%200;
	note100=amount/100;
	amount=amount%100;
	note50=amount/50;
	amount=amount%50;
	note20=amount/20;
	amount=amount%20;
	note10=amount/10;
	amount=amount%10;
	note5=amount/5;
	amount=amount%5;
	note2=amount/2;
	amount=amount%2;
	note1=amount/1;
	amount=amount%1;
	printf("number of note500=%d\n",note500);
	printf("number of note200=%d\n",note200);
	printf("number of note100=%d\n",note100);
	printf("number of note50=%d\n",note50);
	printf("number of note20=%d\n",note20);
	printf("number of note10=%d\n",note10);
	printf("number of note5=%d\n",note5);
	printf("number of note2=%d\n",note2);
	printf("number of note1=%d\n",note1);
	
}
