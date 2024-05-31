#include<stdio.h>
#include<conio.h>

main()

{       int a,c=0;

	clrscr();

	printf("enter any number = ");
	scanf("%d",a);

	if(a<0)
	{
		a =  -a;
	}
	do
	{
		c++;
		a /= 10;

	}while (a != 0);

	printf("Total no. of digit is = %d\n",--c);


	getch();
}