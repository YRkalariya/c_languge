#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100],s2[100];
	int i,j,m,k,c=0,x=0,y=0;

	printf("enter first sring:");
	scanf("%[^\n]",s1);	
	printf("enter second sring:");
	scanf(" %[^\n]",s2);

m=strlen(s1);
///////////////////////////////////////////
	for(i=0;s2[i];i++)
	{
		if(s2[i]==' ')
		y++;

		if((s2[i]>='a'&&s2[i]<='z')||(s2[i]>='A'&&s2[i]<='Z'))
		{
			for(j=0;s1[j];j++)
			{				
				if(s1[j]==s2[i])
				c++;
				y++;
	
			}
		}
		else
		continue;



	}	
///////////////////////////////////////////
	if(c+y>m)
		printf("anagram..\n");
	else
		printf("not anagram..\n");	

}
