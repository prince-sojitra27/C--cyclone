#include <stdio.h>
#include <conio.h>

main ()
{
	int a,b,c;
	clrscr();

	printf("enter the first angle 0f triangle = ");
	scanf("%d",&a);
	printf("enter the second angle 0f triangle = ");
	scanf("%d",&b);

	c = 180 - (a + b);
	printf("the value of third angle is = %d",c);





	getch();


}