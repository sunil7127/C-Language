#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\t\t\t\tno is even or odd");
	printf("\nenter any no:");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("\nthis no is even");
	}
	if(no%2!=0)
	{
		printf("\nthis no is odd");
	}
	if(no==0)
	{
		printf("\nthis no is 0");
	}
	getch();
}