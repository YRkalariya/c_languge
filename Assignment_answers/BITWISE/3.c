//Q3.+ve or -ve

#include<stdio.h>
void main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
num&1<<31?printf("NEGATIVE NUMBER..\n"):printf("POSITIVE NUMBER\n");
}
