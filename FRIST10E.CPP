#include<stdio.h>
#include<conio.h>
void main()
{
	int no=1,counter=0;
	clrscr();
	printf("\t\tprogram to print 10 even number\n");
	while(counter<10)
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