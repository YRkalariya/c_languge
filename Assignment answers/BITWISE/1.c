//write a program for set/clear/toggle a bit

#include<stdio.h>
int main()
{
int num,pos,m;
printf("Enter a number\n");
scanf("%d",&num);
printf("enter bit position\n");
scanf("%d",&pos);
printf("select any of operation from below:\n1.SET A BIT\n2.CLEAR A BIT\n3.TOGGLE A BIT\n");
scanf("%d",&m);

switch(m)
	{
	case 1:
	printf("before setting a bit num=%d\n",num);
	num=num|1<<pos;
	printf("after setting a bit num=%d\n",num);
	break;

	case 2:
	printf("after clearing a bit num=%d\n",num);
	num=num&~(1<<pos);
	printf("after clearing a bit num=%d\n",num);
	break;

	case 3:
	printf("after toggling a bit num=%d\n",num);
	num=num^1<<pos;
	printf("after toggling a bit num=%d\n",num);
	break;

	default:
	printf("you have entered wrong keyword\n");


}


}

