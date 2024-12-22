#include<stdio.h>
int rev(int);
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
printf("sum=%d\n",rev(num));
}
//////////////////////////////////////////
int rev(int n)
{
static int m=0,r;
	if(n)
	{
	r=n%10;
	m=(m*10)+r;
	n=n/10;
	rev(n);
	}	
	else
	return m;
}
