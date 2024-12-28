#include<stdio.h>
int sum(int);
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
printf("sum=%d\n",sum(num));
}
//////////////////////////////////////////
int sum(int n)
{
static int m=0,r;
	if(n)
	{
	r=n%10;
	m=m+r;
	n=n/10;
	sum(n);
	}	
	else
	return m;
}
