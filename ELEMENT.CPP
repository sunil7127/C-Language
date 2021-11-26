#include<stdio.h>
#include<conio.h>
void main()
{
	int no=1,a[3]={0},i=0;
	clrscr();
	printf("\n scaler multiphication \n");
	scanf("%d",&no);
	printf("enter 3 element of set a \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",no*a[i]);
	}
	getch();
}