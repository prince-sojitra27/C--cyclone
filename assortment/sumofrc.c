#include <stdio.h>

main()
{
    int row, col, rowsum = 0, colsum = 0;

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
            printf("enter a[%d][%d] :- ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    int in1, in2;

    printf("enter the number of row :- ");
    scanf("%d", &in1);
    printf("Elements of row :- ", in1);

    for (int j = 0; j < col; j++)
    {

        printf("%d,", a[in1][j]);
        rowsum += a[in1][j];
    }
    printf("\n");
    printf("Sum of row %d :- %d ", in1, rowsum);

    printf("enter the number of col :- ");
    scanf("%d", &in2);
    printf("Elements of col :- ", in2);

    for (int i = 0; i < col; i++)
    {

        printf("%d,", a[i][in2]);
        colsum += a[i][in2];
    }
    printf("\n");
    printf("Sum of col %d :- %d ", in2, colsum);
}
