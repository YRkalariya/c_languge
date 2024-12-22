#include<stdio.h>
void main()
{
int pos,i;
char *p;
float f;
printf("enter float number\n");
scanf("%f",&f);

p=&f;
p=p+3;

for(i=0;i<4;i++,p--)
{
	for(pos=7;pos>=0;pos--)
	printf("%d",*p>>pos&1);
printf(" ");

}
printf("\n");
}
