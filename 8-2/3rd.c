#include <stdio.h>

main()
{
    int size, sum = 0;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("\n\n");

    int a[size];
    int i;

    printf("enter the values of array :-");
    printf("\n\n");

    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf(" %d ", a[i] * a[i]);
    }
}
