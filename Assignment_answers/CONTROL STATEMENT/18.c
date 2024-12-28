#include<stdio.h>
void main()
{
int i,j,k,r;
printf("enter three numbers\n");
scanf("%d%d%d",&i,&j,&k);

 if(i>j&&j>k)
printf("%d is highest number\n",i);

else if(i<j)
j>k?printf("%d is highest numer\n",j):printf("%d is highest number\n",k);

else
printf("you might have entered same value \n");

}
