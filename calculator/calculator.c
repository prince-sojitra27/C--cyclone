#include <stdio.h>
#define pf printf
#define sf scanf

void sum()
{
    int a, b;
    pf("Enter first value :- ");
    sf("%d", &a);
    pf("Enter second value :- ");
    sf("%d", &b);
    pf("Addition of %d and %d is %d\n\n", a, b, a + b);
}
void sub()
{
    int a, b;
    pf("Enter first value :- ");
    sf("%d", &a);
    pf("Enter second value :- ");
    sf("%d", &b);
    pf("Subtraction of %d and %d is %d\n\n", a, b, a - b);
}
void multy()
{
    int a, b;
    pf("Enter first value :- ");
    sf("%d", &a);
    pf("Enter second value :- ");
    sf("%d", &b);
    pf("Multiplication of %d and %d is %d\n\n", a, b, a * b);
}
void divi()
{
    int a, b;
    pf("Enter first value :- ");
    sf("%d", &a);
    pf("Enter second value :- ");
    sf("%d", &b);

    if (b == 0)
    {
        pf("Division by zero is not possible\n\n");
    }
    else
    {
        pf("Division of %d and %d is %d\n\n", a, b, a / b);
    }
}
void mod()
{
    int a, b;
    pf("Enter first value :- ");
    sf("%d", &a);
    pf("Enter second value :- ");
    sf("%d", &b);
    pf("Modules of %d and %d is %d\n\n", a, b, a % b);
}

void main()
{
    int calcy;
    do
    {
        pf("Press 1 for (+) sum ...\n");
        pf("Press 2 for (-) subtraction ...\n");
        pf("Press 3 for (*) multiplication ...\n");
        pf("Press 4 for (/) division ...\n");
        pf("Press 5 for (%%) modules ...\n");
        pf("Press 0 for exit ...\n\n\n");

        pf("Enter your choice :- ");
        sf("%d", &calcy);

        switch (calcy)
        {
        case 1:
            sum();
            break;
        case 2:
            sub();
            break;
        case 3:
            multy();
            break;
        case 4:
            divi();
            break;
        case 5:
            mod();
            break;
        case 0:
            pf("you are exit successfully..!");
        }
    } while (calcy != 0);
}
