#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	float si;
	clrscr();
	printf("enter value of p:");
	scanf("%d",&p);
	printf("\nenter value of r:");
	scanf("%d",&r);
	printf("\nenter value of n:");
	scanf("%d",&n);
	si=(p*r*n)/100;
	printf("\nsi=%f",si);
	getch();

}