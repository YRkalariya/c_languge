/*10) Write a program to convert the characters Upper to Lower and Lower to Upper
in a given string.
Ex: Input: “embedded”
Output: “EMBEDDED” */
#include<stdio.h>
int main()
{
	char s[10],*p;
	int i;
	p=s;
	printf("Enter the string:\n");
	scanf("%s",p);
	for(i=0;p[i];i++)
	{
		if(p[i]>=65&&p[i]<=90)
			p[i]=p[i]+32;
		else if(p[i]>=97&&p[i]<=122)
			p[i]=p[i]-32;
	}
	printf("%s",p);
	printf("\n");
}
