#include<stdio.h>
void main()
{
int num,sum,num1;

for(num=1;num<=1000;num++)
{
for(num1=num,sum=0;num1;num1=num1/10)
sum=sum*10+num1%10;

if(num==sum)
printf("%d ",num);
}

printf("\n");


}
