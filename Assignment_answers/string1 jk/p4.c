/*4) Write a program to find vowels in a given string.
Ex: Input: “embedded”
Output: 3  */

#include<stdio.h>
int main()
{
	char s[10];
	int i;
	printf("Enter the chstring:\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		switch(s[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			printf("%c ",s[i]);
		}
	}
	printf("\nAbove characters are vowel..\n");

}
