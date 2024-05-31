#include<stdio.h>
#include<conio.h>

main()

{       int a,b,c,d;

	clrscr();
	printf("Enter any number =");
	scanf("%d",&c);

	b = c%10;
	while(a >= 10)
	{
	a /=10;
	}

	d= a+b;

	printf("The sum of the first and last digit = %d\n",d);

	getch();
}

