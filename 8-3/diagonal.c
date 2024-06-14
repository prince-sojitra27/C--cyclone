#include <stdio.h>

main()
{
    int row, col, sum = 0;

    printf("Enter the size of row:-");
    scanf("%d", &row);

    printf("\n");

    printf("Enter the size of col:-");
    scanf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d] :-", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
        printf("\n");
    }
    printf("the sum of diagonal elements is = %d", sum);
}
