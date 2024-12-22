/*1) Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file.*/
#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage: ./a.out filename\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	char ch,ch1;
	while((ch=fgetc(fp))!=-1)
	{
		if((ch>=65&&ch<=90)||(ch>=97&&ch<=123))
		{
			ch=ch^1<<5;
			fseek(fp,-1,SEEK_CUR);
			fputc(ch,fp);
		}
	}
}
