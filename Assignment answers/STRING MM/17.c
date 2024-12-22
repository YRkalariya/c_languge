#include<stdio.h>
void main()
{
	int i,j,c=0;
	char m[50],s[40];
	printf("enter main string:");
	scanf("%s",m);
	printf("enter sub string:");
	scanf("%s",s);

	for(i=0;m[i];i++)
	{
		if(s[0]==m[i])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]!=m[i+j])
					break;	
			}
			if(s[j]=='\0')
				c++;
		}
	}
	printf("substring is present %d times in main string\n",c);
}
