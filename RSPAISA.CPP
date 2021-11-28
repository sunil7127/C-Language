#include<stdio.h>
#include<conio.h>
void main()
{
	int rs,paisa;
	clrscr();
	printf("enter value of rs:");
	scanf("%d",&paisa);
	rs=paisa/100;
	printf("\nrs=%d",rs);
	paisa=paisa%100;
	printf("\npaisa=%d",paisa);
	getch();
}