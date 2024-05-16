#include<stdio.h>
#include<conio.h>

main ()
{
	float basesalary, hrapercent, dapercent, tapercent;
	float hra , da , ta , grosssalary;

	printf("enter the base salar of month = ");
	scanf("%f", &basesalary);
	printf("enter the percentage of HRA = ");
	scanf("%f", &hrapercent);
	printf("enter the percentage of DA = ");
	scanf("%f", &dapercent);
	printf("enter the percentage of TA = ");
	scanf("%f", &tapercent);

	hra = (hrapercent / 100) * basesalary;

	da = (dapercent / 100) * basesalary;

	ta = (tapercent / 100) * basesalary;

	grosssalary = basesalary + hra + da + ta;

	printf("the gross salary is = %.2f",grosssalary);
	getch();











}