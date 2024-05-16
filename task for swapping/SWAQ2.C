#include<stdio.h>
#include<conio.h>'

main()

{
	int a,b;
	clrscr();
	printf("Enter the first value = ");
	scanf("%d",&a); //10
	printf("Enter the second value = ");
	scanf("%d",&b); //20

	a = a + b; // a=30
	b = a-b; // b=10
	a = a-b;

	printf("after swapping\n\n");

	printf("the first value is = %d/n",a);
	printf("the second value is = %d",b);




	getch();









}