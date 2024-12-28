//copy files
#include<stdio.h>

void main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("usge: ./12 filename\n");
		return;
	}
	FILE *fp,*d;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	int i;
	char ch;
	for(i=2;i<argc;i++)
	{
		d=fopen(argv[i],"w");
		while((ch=fgetc(fp))!=-1)
		{
			fputc(ch,d);
		}
		rewind(fp);
		

	}
}
