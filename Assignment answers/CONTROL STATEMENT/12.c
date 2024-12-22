#include<stdio.h>
void main()
{
int pos,num,num1,lhs,rhs,i,j,k;
printf("\nenter the number\n");
scanf("%d",&num);
num1=num;
for(pos=0;pos<=31;pos++)
num1=num1^1<<pos;
num1++;
for(i=31;i>=0;i--)
printf("%d",num1>>i&1);
printf("  <-- binary\n");
printf("%d  <--decimal\n",num1);
printf("%o  <--octal\n",num1);
printf("%x  <--hexa\n",num1);
lhs=num1;
rhs=-(num);
if(lhs==rhs)
printf("fomula is satisfying\n\n");
}
