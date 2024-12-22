#include<stdio.h>
void main()
{
int i,num,r,num1;
printf("enter a number\n");
scanf("%d",&num);
num1=num;
for(i=num1,r=1;i>=1;i--)
	r=r*i;
printf("factorial of %d is %d\n",num,r);
}
