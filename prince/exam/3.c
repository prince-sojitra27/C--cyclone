#include <stdio.h>

void rev(int a)
{
    int b, c, d, e, f;

    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    f = (b * 100) + (d * 10) + e;
    printf("The reverse of the number is :- %d", f);
}

main()
{
    int a;
    printf("Enter any 3 Digit number :- ");
    scanf("%d", &a);

    rev(a);
}