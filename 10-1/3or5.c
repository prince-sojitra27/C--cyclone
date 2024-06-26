#include <stdio.h>

main()
{
    int a, b, c;
    printf("Enter the value of a :- ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("The number is divisible by 3 and 5 !...");
    }
    else
    {
        printf("The number is not divisible by 3 and 5 !...");
    }
}