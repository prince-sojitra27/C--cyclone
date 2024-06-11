#include <stdio.h>

main()
{
    int size, sum = 0;

    printf("Enter the size 1st of array = ");
    scanf("%d", &size);
    printf("\n\n");

    printf("Enter the size 2nd of array = ");
    scanf("%d", &size);
    printf("\n\n");

    int a[size], b[size], c[size];

    printf("enter the values of  1st array :-");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    printf("enter the values of  3nd array :-");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        sum = a[i] + b[i];
    }

    printf("\n\n Array sum :-");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", c[i]);
    }
}
