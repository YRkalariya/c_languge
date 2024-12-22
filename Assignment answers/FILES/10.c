//sort command
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc,char **argv)
{
	if(argc!=2){
		printf("wrong usage: ex. ./10 filename\n");
		return;
	}

	char  s[100],ch,t[100];
	static int i,j,c,lines;
	FILE *fp=fopen(argv[1],"r");

	if(fp==0){
		printf("file not found...\n");
		return;
	}

	while((ch=fgetc(fp))!=-1)	//total line count
		if(ch=='\n')
			lines++;

	printf("lines= %d\n",lines);
	rewind(fp);

	char *p[lines];			//storing each line into array
	for(i=0;i<lines;i++)
	{
		p[i]=malloc(30);
		fgets(p[i],50,fp);
	}


	for(i=0;i<lines-1;i++){		//sorting using bubble sort
		for(j=0;j<lines-i-1;j++){
			if(strcmp(p[j],p[j+1])>0)
			{
				strcpy(t,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],t);
			}	
		}
	}

	for(i=0;i<lines;i++)		//printing on screen
		printf("%s",p[i]);


}
