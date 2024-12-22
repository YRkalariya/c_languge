//swap numbers using bitwise operators

#include<stdio.h>
void main()
{
int i,j;
printf("enter value of I and J for swapping\n");
scanf("%d%d",&i,&j);
printf("before swapping i=%d j=%d\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("after swapping i=%d j=%d\n",i,j);

}
