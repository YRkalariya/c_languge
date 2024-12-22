//power of 2

#include<stdio.h>
void main()
{
int num,r;
printf("enter a number to check it is power of 2 or not\n");
scanf("%d",&num);
r=num&num-1;
r?printf("NO %d IS NOT POWER OF 2..\n",num):printf("YES %d IS POWER OF 2..\n",num);


}

