#include<stdio.h>
#include<conio.h>
void main()
{
	long int kb,mb,gb,tb;
	clrscr();
	printf("enter value of kb:");
	scanf("%ld",&kb);
	mb=kb*1024;
	printf("\nmb=%ld",mb);
	gb=mb/1024;
	printf("\ngb=%ld",gb);
	getch();
}