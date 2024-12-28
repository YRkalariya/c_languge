#include<stdio.h>
void main()
{
int a=0,b=1,i,n,r,c;
//printf("enter number \n");
//scanf("%d",&n);

for(i=1,c=0;a<=50;i++)
{
printf("%d  ",a);
r=a+b;
a=b;
b=r;
c++;


}
}
