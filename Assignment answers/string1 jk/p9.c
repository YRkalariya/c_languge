/*9) Write a program to find count of Lower characters, Upper characters, Special
characters and digits occurred in a given string.
Ex: Input: “a1b@CD2#”
Output: Lower characters : 2
Upper characters : 2
Special characters : 2
digits : 2 */
#include<stdio.h>
int main()
{
	char s[10],*p,ch;
	int i,l=0,u=0,sp=0,d=0;
	p=s;
	printf("Enter the string:\n");
	scanf("%s",p);
	for(i=0;p[i];i++)
	{
		if(p[i]>=65&&p[i]<=90)
			u++;
		else if(p[i]>=97&&p[i]<=122)
			l++;
		else if(p[i]>=48&&p[i]<=57)
			d++;
		else
			sp++;
	}
	printf("Lower characters: %d\nUpper characters: %d\nSpecial character: %d\nDigits: %d\n",l,u,sp,d);
}
