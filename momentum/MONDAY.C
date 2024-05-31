#include<stdio.h>
#include<conio.h>

main()

{       char a;

	clrscr();
	printf("Press M for Monday\n");
	printf("Press T for Tuesday\n");
	printf("Press W for Wednesday\n");
	printf("Press T1 for Thursday\n");
	printf("Press F for Friday\n");
	printf("Press S for Saturday\n");
	printf("Press S1 for Sunday\n");


	printf("\n\n");
	printf("Enter your day:");
	scanf("%c",&a);
	printf("\n\n");
	switch(a)
	{
		case 'M':
		printf("Today is Monday !!");
		break;
		case 'T':
		printf("Today is Tuesday !!");
		break;
		case 'W':
		printf("Today is Wednesday !!");
		break;
		case 'T1':
		printf("Today is Thursday !!");
		break;
		case 'F':
		printf("Today is Friday !!");
		break;
		case 'S':
		printf("Today is Saturday !!");
		break;
		case 'S1':
		printf("Today is Sunday !!");
		break;
		default :
			printf("Invalide value!!");

	}
	getch();
}