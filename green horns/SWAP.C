#include<stdio.h>
#include<conio.h>

main()
{	int a,b;
	clrscr();
	printf("enter the first number A = ");
	scanf("%d",&a);
	printf("enter the second number B = ");
	scanf("%d",&b);

	a= a^b;
	b= a^b;
	a= a^b;

	printf("after swapping : \n");
	printf("a : %d\n",a);
	printf("b : %d\n",b);
	getch();








}