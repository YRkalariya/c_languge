#include<stdio.h>
void main()
{
char s[50];
int i,j,x,k,m,t,e;

printf("enter the string:");
scanf("%s",s);

for(x=0;s[x];x++);
e=x-1;

for(i=0;i<e;i++)
{
	for(j=i+1;j<e;j++)
		if(s[i]>s[j])
			t=s[i],s[i]=s[j],s[j]=t;
}

printf("output --> %s\n",s);
}
