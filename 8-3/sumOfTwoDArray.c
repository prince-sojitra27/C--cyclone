#include <stdio.h>

main()
{
    int row, col, sum = 0;

    printf("Enter the size of row :-");

    scanf("%d", &row);

    printf("\n");

    printf("Enter the size of col :-");
    scanf("%d", &col);

    printf("for first matrix :-");
    printf("\n");

    int a[row][col], b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("for second matrix :-");
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter b[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = a[i][j] + b[i][j];
        }
    }

    printf("Sum of 2 matrix");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum);
        }
    }
}