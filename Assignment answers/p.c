#include<stdio.h>
int fun(const char *);
void filecp(const char *,FILE*);
void main(int argc, char**argv)
{

	FILE *fp=fopen(argv[1],"r");
	FILE *fd=fopen(argv[2],"w");
	if(fp==0)
		return;
	char ch,chh;
	int flag,i=0,j=0,c=0;

	char s[100];
	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='<')
		{
			flag =1;
			i=0;
			continue;
		}
		if(ch=='>')
		{
			flag=0;
			s[i]='\0';
			printf("%s\n",s);

			if(fun(s))
			{
			
			printf("file found\n");
				filecp(s,fd);
			
			}
			else
				printf("file not found\n");


		}
		if(flag==1){
			s[i++]=ch;

		}


	}
}
int fun(const char *s)
{
	FILE *fp=fopen(s,"r");
	if(fp==0)
		return 0;
	else
		return 1;
}
void filecp(const char *p,FILE *q)
{
	char ch;
	FILE *fs=fopen(p,"r");
	if(fs==0)
	printf("file not found\n");
	else
	while((ch=fgetc(fs))!=-1)
	fputc(ch,q);

}
