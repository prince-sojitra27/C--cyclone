#include <stdio.h>

main()
{
    int row, col, sum = 0;

    printf("Enter the size of row :-");
    scanf("%d", &row);

    printf("\n");

    printf("Enter the size of col :-");
    scanf("%d", &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d] ;-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}