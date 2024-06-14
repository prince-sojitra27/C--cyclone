#include <stdio.h>

main()
{
    int size, size2;

    printf("Enter the size of fist array:-");
    scanf("%d", &size);
    printf("\n");
    printf("Enter the size of second array:-");
    scanf("%d", &size2);

    int a[size], b[size2], merge[size + size2];

    printf("\n");
    printf("the elements of first array :-");
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] :-", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Enter the elements of second array :-");
    printf("\n");

    for (int i = 0; i < size2; i++)
    {
        printf("a[%d] :-", i);
        scanf("%d", &b[i]);
    }

    printf("\n");
    printf("the elements of merge array :-");
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        merge[i] = a[i];
    }
    for (int i = 0; i < size2; i++)
    {
        merge[i + size] = b[i];
    }
    for (int i = 0; i < size + size2; i++)
    {
        printf("%d ", merge[i]);
    }
}