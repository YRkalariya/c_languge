#include<stdio.h>
void main()
{
unsigned int num,n1,n2;
printf("\nenter a number\n");
scanf("%x",&num);
printf("\nbefore num=%x\n",num);
n1=num&0x000000ff;
n2=num&0x0000ff00;
n1=n1<<8;
n2=n2>>8;
num=n1|n2;
printf("\nafter num=%x\n\n",num);







}
