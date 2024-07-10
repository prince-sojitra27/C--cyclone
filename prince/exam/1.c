#include <stdio.h>

main()
{
    int a;

    printf("\n\n");
    printf("Enter any number :- ");
    scanf("%d", &a);
    printf("\n");

    if (a < 0)
    {
        printf("The number is negative ...!");
    }
    else if (a > 0)
    {
        printf("The number is positive ...!");
    }
    else
    {
        printf("The number is 0 ...!");
    }
}