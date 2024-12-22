#include<stdio.h>
void main()
{
int num,r;
printf("enter a number\n");
scanf("%d",&num);
r=num&num-1;
if(r==0)
printf("%d is power of 2\n",num);
else
printf("%d is not power of 2\n",num);
}
