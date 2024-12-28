//reverse file
#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usge: ./a.out filename\n");
		return;
	}
	FILE *fp,*l;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	int c;			//finding size of file
	fseek(fp,0,SEEK_END);
	c=ftell(fp);
	rewind(fp);

	char ch,t,*p;
	int i=0,j,k;
	p=malloc(c+1);		//declaring array of file size

	while((ch=fgetc(fp))!=-1)//puting file into array
		p[i++]=ch;
	p[i]='\0';
	rewind(fp);

	for(i=0;p[i];i++);	//reversing array
	for(j=0,k=i-1;j<k;j++,k--)
		t=p[j],p[j]=p[k],p[k]=t;

	for(i=0;p[i];i++)	//putting array into file
		fputc(p[i],fp);
}
