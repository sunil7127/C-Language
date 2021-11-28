#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,total;
	float per;
	clrscr();
	printf("enter value of s1:");
	scanf("%d",&s1);
	printf("\nenter value of s2:");
	scanf("%d",&s2);
	printf("\nenter value of s3:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	printf("\ntotal=%d",total);
	per=total/3;
	printf("\nper=%f",per);
	getch();
}