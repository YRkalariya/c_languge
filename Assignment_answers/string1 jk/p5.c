/*5) Write a program to compare two strings.
Ex: First String: “vector”
Second String: “vector”
Output: equal  */

#include<stdio.h>
int main()
{
	char s[10],d[10];
	int i;
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Enter the seconde string:\n");
	scanf("%s",d);

	for(i=0;s[i];i++)
	{
		if(s[i]!=d[i])
		break;
	}
	if(s[i]==d[i])
	printf("Entered strings are Equal..\n");
	else
	printf("Enterd strings are not Equal..\n");
}
