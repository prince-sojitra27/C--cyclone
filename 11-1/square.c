#include <stdio.h>
int square(int size)
{

    size = size * size;
    return size;
}

void main()
{
    int size, i, j, a;

    printf("Enter the size of array:- ");
    scanf("%d", &size);

    int array[size][size], *ptr[size][size];

    printf("\n\n");
    printf("Enter arrray elements :- \n\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);

            printf("\n");
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            square(array[i][j]);
            array[i][j] = square(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }

    printf("square of array :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", *ptr[i][j]);
        }
        printf("\n");
    }
}
