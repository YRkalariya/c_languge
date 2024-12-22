
#include<stdio.h>
void main()
{
char s[50];
int i,j,k,c;

printf("enter the string:");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
	c=0;
	for(j=i+1;s[j];j++)
	{
		if(s[j]==s[i])
		{
			for(k=j;s[k];k++)
			s[k]=s[k+1];
		c++;
		j--;
		}
	}
if(c>0)
printf(" %c --  %d times\n",s[i],c+1);
}
}
