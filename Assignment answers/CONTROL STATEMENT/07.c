/* armstrong 

   number == 1634
   so n=4 (digits)

   1^4 + 6^4 + 3^4 + 4^4  =  1634

 */

#include<stdio.h>
void main()
{
	int c,r,num1,num2,sum1,m,num,sum,i,j;
	printf("enter a number\n");
	scanf("%d",&num);
	num1=num;
	num2=num;
	for(c=0;num1;num1=num1/10)
	c++;
	printf("%d\n",c);
	
	for(m=0,sum=0;m<=c;m++,num2=num2/10)
	{
		r=num2%10;
		for(i=0,sum1=1;i<c;i++)
			sum1=sum1*r;
		sum=sum+sum1;
	}
		if(sum==num)
			printf("it is armstrong number\n");
		else
			printf("not...\n");
}
