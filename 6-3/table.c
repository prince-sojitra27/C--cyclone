#include <stdio.h>
main()
{
    int n, i;

    printf("Enter any number: ");
    scanf("%d", &n);
    printf("\n\n");

    printf("Multiplication table of %d :\n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d\t = %d\n", n, i, n * i);
    }
}