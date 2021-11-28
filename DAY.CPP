#include<stdio.h>
#include<conio.h>
void main()
{
	int day,week,month,year;
	clrscr();
	printf("enter number of day:");
	scanf("%d",&day);
	week=day/7;
	printf("\nweek=%d",week);
	month=day/30;
	printf("\nmonth=%d",month);
	year=day/365;
	printf("\nyear=%d",year);
	getch();

}