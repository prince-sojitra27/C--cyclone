#include<stdio.h>
#include<conio.h>

main ()
{
	int a,b;

	clrscr();

	printf("press (1) for English\n");
	printf("press (2) for Gujarati\n");
	printf("press (3) for Hindi\n");

	printf("\n\n");
	printf("Enter the number :");
	scanf("%d",&a);

	clrscr();

	switch(a)
	{
		case 1:
			printf("press (1) for internet recharge\n");
			printf("press (2) for top-up recharge\n");
			printf("press (3) for special recharge\n");

			printf("\n\n");
			printf("Enter the number :");
			scanf("%d",&b);


			clrscr();

			switch(b)
			{
				case 1:
					printf("\n\n");
					printf("You have successfully done an internet recharge !!\n");
				break;

				case 2:
					printf("\n\n");
					printf("You have successfully done a top-up recharge !!\n");
				break;
				case 3:
					printf("\n\n");
					printf("You have successfully done a special recharge !!\n");
				break;

			}

		break;

		case 2:
			printf("internet recharge krava mate (1) dabavo\n");
			printf("top-up recharge krava mate (2) dabavo\n");
			printf("special recharge krva mate (3) dabavo\n");

			printf("\n\n");
			printf("Enter the number :");
			scanf("%d",&b);


			clrscr();

			switch(b)
			{
				case 1:
					printf("\n\n");
					printf("Tame safaltapurvak internet recharge karavyu chhe !!\n");
				break;

				case 2:
					printf("\n\n");
					printf("Tame safaltapurvak top-up recharge karavyu chhe !!\n");
				break;
				case 3:
					printf("\n\n");
					printf("Tame safltapurvak special recharge karavyu chhe !!\n");
				break;

			}
		break;

		case 3:
			printf("internet recharge karvane ke liye (1) dabaiye\n");
			printf("top-up recharge karvane ke liye (2) dabaiye\n");
			printf("special recharge karvane ke liye (3) dabaiye\n");

			printf("\n\n");
			printf("Enter the number :");
			scanf("%d",&b);


			clrscr();

			switch(b)
			{
				case 1:
					printf("\n\n");
					printf("Aapne safaltapurvak internet recharge karvaya he !!\n");
				break;

				case 2:
					printf("\n\n");
					printf("Aapne safaltapurvak top-up recharge karvaya he !!\n");
				break;

				case 3:
					printf("\n\n");
					printf("Aapne safaltapurvak special recharge karvaya he !!\n");
				break;

			}
		break;
	}



	getch();


}