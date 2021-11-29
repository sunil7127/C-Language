#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	char address[200];
	clrscr();
	printf("\n\t\t\tEnter you full address\n\n");
	do
	{
		address[i]=getchar();
	}while(address[i++]!='@');
	address[i]='\0';
	printf("\n\t\t\tFile content is as shown below\n\n");
	puts(address);
	getch();
}