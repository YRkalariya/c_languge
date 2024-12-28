#include<stdio.h>
void main()
{
int num,pos;
printf("enter the number\n");
scanf("%d",&num);

for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");




}
