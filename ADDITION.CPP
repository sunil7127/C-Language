#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,addition,subtraction,multiplication,division;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	addition=a+b;
	printf("\naddition=%d",addition);
	subtraction=a-b;
	printf("\nsubtraction=%d",subtraction);
	multiplication=a*b;
	printf("\nmultiplication=%d",multiplication);
	division=a/b;
	printf("\ndivision=%d",division);
	getch();
}