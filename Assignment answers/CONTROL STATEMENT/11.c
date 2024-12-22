#include<stdio.h>
void main()
{
	int num,num1,rhs,lhs,pos;
	printf("\nenter the number\n");
	scanf("%d",&num);

	for(pos=31;pos>=0;pos--)    //print nimnary of given number
		printf("%d",num>>pos&1);
		printf("  <-- number\n");
	

		num1=num;

		for(pos=31;pos>=0;pos--)
			num1=num1^1<<pos;

		for(pos=31;pos>=0;pos--)    //print binary of cmplimented number
			printf("%d",num1>>pos&1);
		printf("  <-- 1's compliment\n");

		lhs=num1;

		rhs=-(num+1);
		if(rhs==lhs)
			printf("number is satisfying formula\n1's compliment of num= -(num+1)  \n");
printf("%d - decimal value\n",rhs);
printf("%o - octal value\n",rhs);
printf("%x -  hexadecimal value\n\n",rhs);





	}
