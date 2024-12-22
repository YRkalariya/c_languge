#include<stdio.h>
void main()
{
	char s[10],ch;
	int i,c;
	printf("enter string:");
	scanf("%s",s);

	for(i=0,c=0;s[i];i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
		{
			printf("%c",s[i]);
			c++;
		}
	}
	printf("\ntotal vowels:%d\n",c);
}
