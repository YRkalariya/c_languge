#include<stdio.h>
void main()
{
int num,sum,num1;
printf("enter a number\n");
scanf("%d",&num);

for(num1=num,sum=0;num1;num1=num1/10)
	sum=sum*10+num1%10;

printf("NUMBER=%d  REVERSE=%d\n",num,sum);
}
