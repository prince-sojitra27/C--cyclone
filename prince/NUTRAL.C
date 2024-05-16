#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("enter the number ");
	scanf("%d",&a);

	if(a>0)
	{
	   printf("the number is positive");
	}
	else if (a == 0)
	{
	   printf("the number is nutral");
	}
	else
	{
	   printf("the number is nagative");
	}
	getch();






}