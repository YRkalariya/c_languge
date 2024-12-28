//word cound cmd
#include<stdio.h>

void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usge: ./12 filename\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	char ch;
	int c=0,word=0,line=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch==' ')
			word++;
		if(ch=='\n')
		{
			word++;
			line++;
		}
	}
	printf("lines=%d   words=%d  characters=%d  %s\n",line,word,c,argv[1]);
}

