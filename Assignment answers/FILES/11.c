//grep cmd
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("usage: ./11  string  file\n");
		return;
	}
	FILE *fp=fopen(argv[2],"r");

	if(fp==0)
	{
		printf("file not found\n");
		return;
	}

	int c=0,line=0;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>line)
				line=c;
			c=0;
		}
	}
	rewind(fp);

	char s[line+1];
	while(fgets(s,line+1,fp))
		if(strstr(s,argv[1]))
			printf("%s",s);

}
