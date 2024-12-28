/*8) Write a program to delete a desired character in a given string.
Ex: Input: “embedded”
Character:’d’
Output: “embee”*/
#include<stdio.h>
int main()
{
	char s[10],*p,ch;
	int i,j;
	p=s;
	printf("Enter the string:\n");
	scanf("%s",p);
	printf("enter the character:\n");
	scanf(" %c",&ch);
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
		{
			for(j=i;p[j];j++)
			p[j]=p[j+1];
		i--;
		}
		
	}
	printf("%s",p);
	printf("\n");
}
