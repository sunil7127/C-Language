#include<stdio.h>
#include<conio.h>
void main()
{
	int number,square,cube;
	clrscr();
	printf("plese enter any number:");
	scanf("%d",&number);
	square=number*number;
	printf("\nsquare=%d",square);
	cube=number*number*number;
	printf("\ncube=%d",cube);
	getch();
}