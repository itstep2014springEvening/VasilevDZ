
#include <stdio.h>
int main () {
int i, n, a, max;
printf ("vvedite skoko nado cifr: ");
scanf ("%d", &n);
printf ("vvodite sami %d chisel: ", n);
scanf ("%d", &max);
for(i = 1; i < n ; i++)
    {
scanf ("%d", &a);
if(a > max)
max = a;
}
printf ("%d", max);
return 0;
}

