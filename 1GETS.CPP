#include<stdio.h>
#include<conio.h>
void main()
{
	char fullname[30];
	clrscr();
	printf("enter your full name:");
	gets(fullname);
	printf("\nentered your full name is:");
	puts(fullname);
	getch();
}