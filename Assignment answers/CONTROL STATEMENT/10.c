#include<stdio.h>
void main()
{
int i,j,m;

printf("enter 1st number\n");
scanf("%d",&i);
printf("enter second number\n");
scanf("%d",&j);

printf("enter an option from following options..\n1.ADDISION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
scanf("%d",&m);

switch(m)
{
	case 1:
	printf("%d\n",i+j);
	break;

	case 2:
	printf("%d\n",i-j);
	break;

	case 3:
	printf("%d\n",i*j);
	break;

	case 4:
	printf("%d\n",i/j);
	break;

	default:
	printf("invalid input");
}
}
