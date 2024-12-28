//delete line
#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp=fopen(argv[1],"r+");
	if(fp==0)
		return;
	int c1=0,c=0,i=0;
	char ch,ch1,s[100];
	printf("enter the line you want to delete: ");
	scanf("%d",&c1);
	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='\n')
		{
			if(c==c1-1)
				c++;
			else
			{
				s[i++]=ch;
				c++;
			}
		}
		else if(c!=c1-1)
		{
			s[i]=ch;
			i++;
		}
	}
	s[i]='\0';
	i=0;
	FILE *fd=fopen(argv[1],"w");
	while(s[i])
	{
		fputc(s[i],fd);
		i++;
	}
}
