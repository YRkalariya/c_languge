#include<stdio.h>
void main()
{
char s[50],ch;
int i,j;

printf("enter the string:");
scanf("%s",s);
printf("enter the character:");
scanf(" %c",&ch);

for(i=0;s[i];i++)
{
	if(s[i]==ch)
	{
		for(j=i;s[j];j++)
		s[j]=s[j+1];
	i--;
	}

}
printf("output -->  %s\n",s);
}
