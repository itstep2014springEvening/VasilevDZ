#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, a, min=0, max=0;
    printf ("Vvedite n \n");
    scanf ("%d", &n);
    m=n;
    for (n; n>0; --n)
    {
        printf ("Vvedite chislo ");
        scanf ("%d", &a);
        max=(a>max?a:(m>n?max:a));
        min=(a<min?a:(m>n?min:a));
    }
    printf ("max=%d\nmin=%d", max, min);
    return 0;
}
