#include<stdio.h>
#include<conio.h>

main ()

{
	int a;
	float f,q;

	clrscr();

	printf("Enter the numbers of unit =");
	scanf("%d",&a);

	//for the first 50 units
	if(a<=50)
	{
		f= (a*0.50);
		printf("\n\n");
		printf("Your electricity bill is = %.2f Rs.",f);
	}
	//for the next 100 units
	else if(a<=150)
	{
		f=25+(a-100)*(0.75);
		printf("\n\n");
		printf("Your electricity bill is = %.2f Rs.",f);
	}
	//for the next 100 units
	else if(a<=250)
	{
		f=100+ (a-100)*(1.20);
		printf("\n\n");
		printf("Your electricity bill is = %.2f Rs.",f);
	}
	//for 250+ units
	else if(a>250)
	{
		f=220+ (a-250) * (1.50);
		q=(f*20)/100;
		f+=q;

		printf("\n\n");
		printf("Your electricity bill is = %.2f Rs.",f);
	}
	else
	{
		printf("Invalid value ...\n\n");
		printf("Please try again !!");
	}
	getch();
}