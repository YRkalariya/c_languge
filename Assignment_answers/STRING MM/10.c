#include<stdio.h>
void main()
{
char s[50];
int i,j,k,c;

printf("enter the string:");
scanf("%[^\n]",s);


for(i=0;s[i];i++)
{
	if(s[i]==' ')
	{
		if(s[i+1]==' ')
		{
			for(j=i;s[j];j++)
			s[j]=s[j+1];
		i--;
		}
	}
}
printf("output --> %s\n",s);
}
