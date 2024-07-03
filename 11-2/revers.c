#include <stdio.h>

main()
{
    int size, i, n;
    printf("Enter the array's size: ");
    scanf("%d", &size);
    int a[size];

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]:- ", i);
        scanf("%d", &a[i]);
    }
    int *ptr[size];

    for (i = 0; i < size; i++)
    {

        ptr[i] = &a[i];
    }
    printf("reverse array :-");
    for (i = size - 1; i >= 0; i--)
    {

        printf("%d\t", *ptr[i]);
    }
}
