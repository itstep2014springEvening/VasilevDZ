#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b=0;
    printf("Vvedite chislo :  ");
    scanf ("%d", &n);
    a=n;
    for (a=n; a>0; a=a/10)
    {
        b=(b*10)+(a%10);
    };
    if (n==b)
    {
        printf ("Palindrom!");
    }
    else
    {
        printf ("Ne palindrom :(");
    };
    return 0;
}
