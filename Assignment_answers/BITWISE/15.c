#include<stdio.h>
void main()
{
int num1,num,pos,m,j,i;
printf("enter the number\n");
scanf("%d",&num);

for(m=31;m>=0;m--)
printf("%d",num>>m&1);
printf("  <-- input\n");

printf("enter position and no of bits\n");
scanf("%d%d",&pos,&i);

num1=num>>pos;
num1=num1<<32-i;

for(j=31;j>31-i;j--)
printf("%d",num1>>j&1);
printf("  <-- output\n");
}
