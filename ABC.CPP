#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	a=a+b;
	printf("\nvalue of a=%d",a);
	printf("\nvalue of b=%d",b);
	getch();
}