#include<stdio.h>
void main()
{
	unsigned int n1,n2,n3,num1,num;
	int pos;

	printf("enter the number\n");
	scanf("%d",&num);
	num1=num;

	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("  <-- input binary\n");

	n1=num1&0xf0000000;
	n2=num1&0x0000000f;
	n3=num1&0x0ffffff0;

	n1=n1>>28;
	n2=n2<<28;
	num1=n1|n2|n3;
	printf("%d\n",num1);

	for(pos=31;pos>=0;pos--)
	printf("%d",num1>>pos&1);
	printf("  <-- output binary\n");

}
