#include<stdio.h>
#include<conio.h>
void main()
{
	int no=1,i=1;
	clrscr();
	printf("\t\t\tenter which table you want \n ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("%d ",no*i);
	}
	getch();
}