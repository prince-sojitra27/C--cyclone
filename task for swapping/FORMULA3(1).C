#include<stdio.h>
#include<conio.h>

main()
{       int x, y, a;
	clrscr();

	printf("enter the value of x = ");
	scanf("%d",&x);
	printf("enter the value of y = ");
	scanf("%d",&y);

	a = (x+y)*(x+y)*(x+y);

	printf("the formula = (x+y^3) \n\n");
	printf("the answer of the formula is = %d",a);


	getch();


}