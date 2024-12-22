/*7) Write a program to check the given strings are palindrome or not.
Note: Palindrome words are words which read and spell the same way both
backwards and forwards.
Ex: madam, level , radar, stats and etc.*/
#include<stdio.h>
int main()
{
	char s[10],*p,temp;
	int i,k,j;
	p=s;
	printf("Enter the string:\n");
	scanf("%s",p);
	for(i=0;p[i];i++);
	for(k=i-1,j=0;k>i/2;k--,j++)
	{
		if(p[k]!=p[j])	
		break;
		
	}
	if(k==i/2)
	printf("string is palindrome..\n");
	else
	printf("string is not palindrome..\n");

}
