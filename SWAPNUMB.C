#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("program for swap two numbers");
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	getch();
}