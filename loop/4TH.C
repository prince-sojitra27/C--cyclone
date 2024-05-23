#include<stdio.h>
#include<conio.h>

main()
{       int n;

	clrscr();

	printf("Enter the odd number = ");
	scanf("%d",&n);

	if (n%2==0)
	{	n--;
	}
	while (n>0)

	{
		printf("%d\n",n);
		n -=2;
	}
	getch();


}