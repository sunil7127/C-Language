#include<stdio.h>
#include<conio.h>
void main()
{
	long int km,met,cm;
	clrscr();
	printf ("value of km:");
	scanf("%ld",&km);
	met=km*1000;
	printf("\nmer=%ld",met);
	cm=met*100;
	printf("\ncm=%ld",cm);
	getch();
}