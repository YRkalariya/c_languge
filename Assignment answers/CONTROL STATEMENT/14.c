#include<stdio.h>
void main()
{
int r,i,num,pos;
printf("enter the number and bit position\n");
scanf("%d%d",&num,&pos);

//for(i=0;i<=31;i++)
/*
r=num>>pos&1;
if(r==0)
r=r^1<<pos;
else
r=r^1<<pos;
*/

for(i=0;i<=pos;i++)
r=1<<i;
num=num^r;

printf("new number is %d and %d bit is toggled\n",num,pos);




}
