#include <stdio.h>

main()
{
    FILE *fp1, *fp2;

    fp1 = fopen("even1.txt", "w");
    fp2 = fopen("odd2.txt", "w");

    fprintf(fp1,"EVEN NUMBERS :-");
    fprintf(fp2,"ODD NUMBERS :-");

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fp1, "%d\n", i);
        }
        else
        {
            fprintf(fp2, "%d\n", i);
        }
    }
    fclose(fp1);
    fclose(fp2);

}
