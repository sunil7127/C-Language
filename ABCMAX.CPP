#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	printf("\nenter value of c:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("\n a is max");
	}
	if(b>a&&b>c)
	{
		printf("\n b is max");
	}
	if(c>a&&c>a)
	{
		printf("\n c is max");
	}
	getch();
}