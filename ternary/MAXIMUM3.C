#include<stdio.h>
#include<conio.h>
main ()

{
	int a,b,c;

	clrscr();

	printf("Enter the first value :");
	scanf("%d",&a);
	printf("Enter the second value :");
	scanf("%d",&b);
	printf("Enter the third value :");
	scanf("%d",&c);

	printf("\n\n");

	(a==b)
		?	printf("invalid value !!\n\n")

		:       (b==c)
				?	printf("invalid value !!\n\n")

				:       (c==a)
						?	printf("invalid value !!\n\n")

						:


	(a>b)
		?
			(a>c)

			?	printf("%d is maximum",a)
			:       printf("%d is maximum",c)

		:
			(b>c)

			?       printf("%d is maximum",b)
			:       printf("%d is maximum",c);






	getch();

}