/*11) Write a program to accept two strings from user into two character array and
copy one by one character into another destination array.
Ex: First String: “abcdefg”
Second String: “1234”
Then Destination String: “a1b2c3d4efg” */
#include<stdio.h>
int main()
{
	char s[20],d[20],f[20];
	int i,j,k,l,m,n;
	printf("Enter the first string:\n");
	scanf(" %s",s);
	printf("Enter the seconde stringi:\n");
	scanf(" %s",d);
	for(i=0;s[i];i++);
	for(j=0;d[j];j++);

	
	for(k=0,m=0,n=0;k<i+j;)
	{	
		if(s[m]!=0&&d[n]!=0)
		{
			f[k]=s[m];
			m++;
			k++;
			f[k]=d[n];
			n++;
			k++;
		}
		else if(s[m]==0)
		{
			f[k]=d[n];
			n++;
			k++;
		}
		else if(d[n]==0)
		{
			f[k]=s[m];
			m++;
			k++;
		}
	
	}
	f[k]='\0';
	for(l=0;f[l];l++)
	printf("%c",f[l]);
		
}
