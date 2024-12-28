#include<stdio.h>
void main()
{
int num,power,r,i;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the power\n");
scanf("%d",&power);

for(i=0,r=1;i<power;i++)
{
r=r*num;
}
printf(" ans = %d\n",r);
}
