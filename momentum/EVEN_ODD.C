#include<stdio.h>
#include<conio.h>
main ()

{
	int n;

	clrscr();

	printf("Enter the number =");
	scanf("%d",&n);

	printf("\n\n");

	(n%2==0)
		?	printf("The number is even...")
		:       printf("The number is odd...");


	getch();
}