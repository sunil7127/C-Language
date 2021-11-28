#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,total;
	float per;
	clrscr();
	printf("\t\t\t\tfrist result");
	printf("\n enter mark of s1,s2 and s3:");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	printf("\ntotal=%d",total);
	per=total/3.0;
	printf("\nper=%f",per);
	if(s1>27&&s2>27&&s3>27)
	{
		if(per>=70)
		{
			printf("\nresult is distinction");
		}
		else if(per>=60)
		{
			printf("\nresult is first class");
		}
		else if(per>=50)
		{
			printf("\nresult is second class");
		}
		else
		{
			printf("\npass");
		}

	}
	else
	{
		printf("\nfail");
	}
	getch();
}