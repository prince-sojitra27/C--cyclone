#include <stdio.h>

main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n\n");

    int a[size], small;

    printf("Enter array elements :- ");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int *ptr[size];

    printf("The square of array elements :- ");
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];

        printf("%d,", *ptr[i] * *ptr[i]);
    }
}