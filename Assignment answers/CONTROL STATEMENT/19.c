#include<stdio.h>
void main()
{
	int m;
	printf("Enter number of month:\n");
	scanf("%d",&m);

	if(m>0&&m<13)
	{

		switch(m)
		{
			case 1:
				printf("January\n");
				break;

			case 2:
				printf("February\n");
				break;

			case 3:
				printf("March\n");
				break;

			case 4:
				printf("April\n");
				break;

			case 5:
				printf("May\n");
				break;

			case 6:
				printf("June\n");
				break;

			case 7:
				printf("July\n");
				break;

			case 8:
				printf("August\n");
				break;

			case 9:
				printf("September\n");
				break;

			case 10:
				printf("Octomber\n");
				break;

			case 11:
				printf("November\n");
				break;

			case 12:
				printf("December\n");
				break;

			default:
				printf("inalid input");
		}
	}

	else
		printf("please enter number from 1 to 12\n");

}
