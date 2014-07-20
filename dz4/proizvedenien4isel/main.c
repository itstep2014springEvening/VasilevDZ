#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b ,a;
    printf ("Vvedite n \n");
    scanf ("%d", &n);
    for ( b=1; n>0; b*=a)
    {
        printf ("Vvedide chislo ");
        scanf ("%d", &a);
        n-=1;
    }
    printf("proizvedenie ravno  = %d",b);
    return 0;
}
