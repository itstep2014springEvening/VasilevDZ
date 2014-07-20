#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,fnok,fnod;
    printf("vvedite A\n");
    scanf("%d",&a);
    printf("vvedite B\n");
    scanf("%d",&b);
    fnok=nok(a,b);
    fnod=nod(a,b);
    printf("nok=%d\n",fnok);
    printf("nod=%d\n",fnod);
    return 0;
}

