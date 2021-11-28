#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter mark of a:");
	scanf("%d",&a);
	printf("\nenter mark of b:");
	scanf("%d",&b);
	printf("\nenter mark of c:");
	scanf("%d",&c);
	if(a<28||b<28||c<28)
	{
		printf("\nfail");
	}
	if(a>28||b>28||c>28)
	{
		printf("\npass");
	}
	getch();
}