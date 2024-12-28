#include<stdio.h>
void p_word(int);

void main()
{
int num,r,n,m;
printf("enter number:");
scanf("%d",&num);
	
	r=num;		//// reverse the number
	n=0;
	for(;r;r=r/10)
	{m=r%10;
	n=n*10+m;}

p_word(n);
printf("\n");
}

void p_word(int n)
{
static int r;


	if(n)
	{
	r=n%10;
	if(r==1)
	printf("one ");
	else if(r==2)
	printf("two ");	
	else if(r==3)
	printf("three ");	
	else if(r==4)
	printf("four ");	
	else if(r==5)
	printf("five ");	
	else if(r==6)
	printf("six ");	
	else if(r==7)
	printf("seven ");	
	else if(r==8)
	printf("eight ");	
	else if(r==9)
	printf("nine ");	
	else
	printf("zero ");	
	n=n/10;
	p_word(n);
	}
}
