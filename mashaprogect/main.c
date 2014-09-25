#include <stdio.h>
#include <stdlib.h>

typedef struct _Q
{
    int real, i, j, k;
} Q;

void sum (Q a, Q b);
void minus (Q a, Q b);
void definition (Q a, Q b);

int main()
{
    int real1, i1, j1, k1, real2, i2, j2, k2;

    printf("Enter real1:\n");
    scanf("%d", &real1);
    printf("Enter i1:\n");
    scanf("%d", &i1);
    printf("Enter j1:\n");
    scanf("%d", &j1);
    printf("Enter k1:\n");
    scanf("%d", &k1);
    Q a= {real1, i1, j1, k1};

    printf("Enter real2:\n");
    scanf("%d", &real2);
    printf("Enter i2:\n");
    scanf("%d", &i2);
    printf("Enter j2:\n");
    scanf("%d", &j2);
    printf("Enter k2:\n");
    scanf("%d", &k2);
    Q b= {real2, i2, j2, k2};

    int command;
    printf("1: +\n2: -\n3: *");
    scanf("%d", &command);

    switch (command)
    {
    case 1:
        sum(a, b);
        break;
    case 2:
        minus(a, b);
        break;
    case 3:
        definition(a, b);
        break;
    default:
        printf("ERROR!");
    }

    return 0;
}

void sum (Q a, Q b)
{
    a.real+=b.real;
    a.i+=b.i;
    a.j+=b.j;
    a.k+=b.k;
    printf("Result = %d+%di+%dj+%dk", a.real, a.i, a.j, a.k);
}

void minus (Q a, Q b)
{
    a.real-=b.real;
    a.i-=b.i;
    a.j-=b.j;
    a.k-=b.k;
    printf("Result = %d+%di+%dj+%dk", a.real, a.i, a.j, a.k);
}

void definition (Q a, Q b)
{
    int result,resultI,resultJ,resultK;
    result=a.real*b.real-a.i*b.i-a.j*b.j-a.k*b.k;
    resultI=a.real*b.i+a.i*b.real+a.j*b.k-a.k*b.j;
    resultJ=a.real*b.j-a.i*b.k+b.real*a.j+a.k*b.i;
    resultK=a.real*b.k+a.i*b.j-a.j*b.i+a.k*b.real;
    printf("Result = %d+%di+%dj+%dk", result, resultI, resultJ, resultK);

}
