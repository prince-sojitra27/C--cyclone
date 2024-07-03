#include <stdio.h>

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

main()
{
    int x, y;

    printf("Enter the value of x :- ");
    scanf("%d", &x);
    printf("Enter the value of y :- ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("After swapping :- \n");

    printf("x = %d\n", x);
    printf("y = %d\n", y);
}