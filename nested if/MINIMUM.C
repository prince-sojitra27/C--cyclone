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

	if(a==b)
	{
		printf("invlid value ...\n");
		printf("please try again !! ");
	}
	else if(b==c)
	{
		printf("invlid value ...\n");
		printf("please try again !! ");
	}
	else if(c==a)
	{
		printf("invlid value ...\n");
		printf("please try again !! ");
	}
	else
	{
		if(a<b)
		{
			if(a<c)
			{
				printf("%d is minimum",a);
			}
			else
			{
				printf("%d is minimum",c);
			}
		}
		else
		{
			if(b<c)
			{
				printf("%d is minimum",b);
			}
			else
			{
				printf("%d is minimum",c);
			}
		}
	}





	getch();



}