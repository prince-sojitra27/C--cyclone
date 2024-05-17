#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("Enter the value of lenth = ");
	scanf("%d",&a);
	printf("Enter the value of breadth = ");
	scanf("%d",&b);

	c = (a)*(b);

	printf("The area of the rectangle is = %d",c);

	getch();


}