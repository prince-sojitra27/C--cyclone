#include <stdio.h>
#include <conio.h>
main()
{
   int x,y,a;
    clrscr();
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
     scanf("%d",&y);

    a = (x-y)*(x-y);

    printf("the formula is (x-y)^2");
    printf("the answer of the of the formula is = %d",a);

  getch();
}

