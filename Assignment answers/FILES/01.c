//toggle charcter(small-capital and capital-small)
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("wrong format of input\n");
		return;
	}

	FILE *fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not exists!\n");
		return;
	}
	char ch,*p;
	int c=0,i=0;

	while((ch=fgetc(fp))!=-1)
		c++;
	rewind(fp);

	p=malloc(c+1);

	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;
	p[i]='\0';
	rewind(fp);

	for(i=0;p[i];i++)
		p[i]=p[i]^1<<5;

	for(i=0;p[i];i++)
		fputc(p[i],fp);
}
