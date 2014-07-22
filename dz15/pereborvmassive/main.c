#include <stdio.h>
#include <stdlib.h>
#include "myfunk.h"

int main()
{   const n=10;
    int k,p,z,i;
    int a[n];
   razmermassiva(a,n);
    printf("vash massiv:\n");
    vivodmassiva(a,n);
    printf("vvedite nujnoe vam chiselko");
    scanf("%d",&p);
   nomervmassive( p,a);
    return 0;

}
