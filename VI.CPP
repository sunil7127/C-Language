#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10];
	clrscr();
	printf("\nenter any name=");
	gets(name);
	puts(name);
	printf("\nlarge of name=%d",strlen(name));
	getch();
}