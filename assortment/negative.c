#include <stdio.h>

main()
{
    int size;
    printf("enter araay 1D array size :- ");
    scanf("%d", &size);

    int a[size];
    printf("Enter array elements :- ");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("enter a[%d] :- ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    printf("The nagative array is :- ");

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)

        {
            printf("%d,", a[i]);
        }
    }
}