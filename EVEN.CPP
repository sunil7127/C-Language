#include<stdio.h>
#include<conio.h>
void main()
{
	int no=101,counter=0;
	clrscr();
	while(100<counter<200)
	{
		if(no%2==0)
		{
			printf("\n%d",no);
			counter++;
		}
		no++;
	}
	getch();
}