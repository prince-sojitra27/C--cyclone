#include <stdio.h>

main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n\n");

    int a[size], small[1];

    printf("Enter array elements :- ");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                small[0] = a[j];
            }
            else
            {

                small[0] = a[i];
            }
        }
    }

    printf("The smallest element of the arrey :- %d ", small[0]);
}