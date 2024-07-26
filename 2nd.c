#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
    int chemMark;
    int mathsMark;
    int phyMark;
    float per;
};
main()
{
    struct student s[5];
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll no of student %d :- ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter the name of student %d :-", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter the marks of student %d in chemistry :-", i + 1);
        scanf("%d", &s[i].chemMark);
        printf("Enter the marks of student %d in maths :-", i + 1);
        scanf("%d", &s[i].mathsMark);
        printf("Enter the marks of student %d in physics :-", i + 1);
        scanf("%d", &s[i].phyMark);
        s[i].per = (s[i].chemMark + s[i].mathsMark + s[i].phyMark);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The roll no of student %d is \t:- %d\n", i + 1, s[i].rollno);
        printf("The name of student %d is \t:- %s\n", i + 1, s[i].name);
        printf("\n");
        printf("Result pof student %d\t :-", i + 1);
        printf("\n");
        printf("Marks of CHEMYSTRY\t :- %d\n", s[i].chemMark);
        printf("Marks of MATHS\t :- %d\n", s[i].mathsMark);
        printf("Marks of PHYSYCS\t :- %d\n", s[i].phyMark);
        printf("Percentage of student %d is\t :- %.2f\n", i + 1, s[i].per);
        printf("-----------------------------------");
    }
}
