#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("\t\t\t\tswap two numbers");
	printf("\nenter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nvalue of a=%d",a);
	printf("\nvalue of b=%d",b);
	getch();
}