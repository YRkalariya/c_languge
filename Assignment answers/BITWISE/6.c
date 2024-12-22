//number is divisible by 8 or not

#include<stdio.h>
void main()
{
int num;

printf("enter a number...\n");
scanf("%d",&num);
(((num>>3)<<3)==num)?printf("%d is divisible by 8.\n",num):printf("%d is not divisible by 8.\n",num);

}

