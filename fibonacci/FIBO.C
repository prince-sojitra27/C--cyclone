#include<stdio.h>
#include<conio.h>

main()
{       int a=0,b=1,n,f,i=1;

	clrscr();
	printf("enter the value of n =");
	scanf("%d",&n);
	printf("the fibonacci = %d",n);

	printf("\n\n%d\t",a);
	printf("%d\t",b);

	for(; i<=n; i++)
	{
		f= a+b;
		printf("%d\t",f);
		a=b;
		b=f;

	}
	getch();
}
