#include <stdio.h>
main()
{
    int i, n, f = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("The factorial is: %d", f);
}
