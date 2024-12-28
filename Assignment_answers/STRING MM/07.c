#include<stdio.h>
void main()
{
	char s[50],a[50];
	int i,j,k,m,c=0;
	printf("enter the string:");
	scanf("%s",s);

	for(j=0;s[j];j++);// size of string
	m=j;
	for(i=0;i<=j;i++)
		a[i]=s[j-i-1];
	a[i]='\0';

	for(k=0;s[k];k++)
		if(s[k]==a[k])
			c++;

	if(c==m)
		printf("palindrome word\n");
	else
		printf("not a palindrome word\n");
}
