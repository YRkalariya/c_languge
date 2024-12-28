#include<stdio.h>
void main()
{
char s[50];
int i,j,k,c;

printf("enter the string:");
scanf("%[^\n]",s);


for(i=0;s[i];i++)
{
	for(j=i+1;s[j];j++)
		if(s[j]==s[i])
		{
			for(k=i;s[k];k++)
			s[k]=s[k+1];
		j--;
		}
}
	

printf("output --> %s\n",s);
}
