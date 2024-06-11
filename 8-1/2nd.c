#include <stdio.h>

main()
{
    int size,sum;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("\n\n");

    int a[size];

    printf("enter the values of array :-");
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    
    printf("\n\n Array sum :-");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
    printf("\n\n Array AVG :-");

    printf("AVG of the array :- %d",sum/size);    



    
    printf("The AVG of an array : %d", size/);
}
