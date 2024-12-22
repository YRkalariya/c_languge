#include<stdio.h>

void rev_arr(char*,int);
///////////////////////////////////////////////
void main()
{
	int m,i,j,e,num;
	char a[10];

	printf("enter string:");
	scanf("%s",a);
	
	for(i=0;a[i];i++);
	m=i;

	rev_arr(a,m-1);

	printf("after reverse : ");
	printf("%s ",a);
	printf("\n");
}
///////////////////////////////////////////////////
void rev_arr(char *p,int j)
{
	static int i=0,t;
	if(i<j)
	{
		t=p[i],p[i]=p[j],p[j]=t;
		i++;
		j--;
		rev_arr(p,j);
	}
}
