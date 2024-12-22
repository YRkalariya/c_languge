/*Write a program to find the no. of times the character is found in a given string.
Ex: Input: “embedded”
Character:’d’
Output: 3*/

#include<stdio.h>
int main()
{
	char s[10],ch;
	int i,c;
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Enter the character:\n");
	scanf(" %c",&ch);
	
	for(i=0,c=0;s[i];i++)
	{
		if(s[i]==ch)
		c++;		
	}
	printf("the character ch is %d times available in string...\n",c);
}
