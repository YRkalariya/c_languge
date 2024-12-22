//odd or even number using bitwise operator

#include<stdio.h>
void main()
{
int i;
printf("\n ENTER A NUMBER \n");
scanf("%d",&i);
(i&1)?printf("ODD NUMBER\n"):printf("EVEN NUMBER\n");
}
