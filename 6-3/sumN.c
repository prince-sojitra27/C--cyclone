#include <stdio.h>

main()
{
    int N, sum = 0, a;

    printf("Enter the value of N :- ");
    scanf("%d", &N);

    for (a = 1; a <= N; a++)
    {
        sum += a;
    }
    printf("The sum of the numbers :- %d ", sum);
}
