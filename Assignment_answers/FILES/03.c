///replace line in given linenumber
#include<stdio.h>
void main(int argc,char **argv)
{
	char s[100];
	char n[100];
	char ch;
	int num,i=0,j,c=0;
	printf("enter number of line : ");
	scanf("%d",&num);
	printf("enter new line: ");
	scanf(" %[^\n]",n);

	FILE *fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("wrong usage\n");
		return;
	}

	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='\n')
		{
			s[i]=ch;
			c++;
			i++;
		}
		else if(c==num)
		{
			if(ch=='\n')
				c++;
		}
		else if(c==num-1)
		{
			for(j=0;n[j];j++,i++)
				s[i]=n[j];
			s[i]='\n';
			c++;	
		}
		
		else
		{
			s[i]=ch;
			i++;

		}
	}
//	s[i]='\0';
	i=0;
	FILE *fd=fopen(argv[1],"w");
	while(s[i])
	{
		fputc(s[i],fd);
		i++;

	}
//printf("\n\n");
//system("cat data");
}
