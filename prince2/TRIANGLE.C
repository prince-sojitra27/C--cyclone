#include<stdio.h>
#include<conio.h>

main()
{       int a,b,c;

	clrscr();

	printf("Enter the value of base = ");
	scanf("%d",&a);
	printf("Enter the value of height = ");
	scanf("%d",&b);

	c = (0.5)*(a*b);

	printf("the area of the triangle is = %d",c);



	getch();


}