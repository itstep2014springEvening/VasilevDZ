#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int d, i, j,c,l;

printf("vvedite R");
scanf("%d",&d);
c=d/2;
l=d/2;
for(int i=0; i<d; i++)
{
for(int j=0; j<d; j++)
{
if (abs(((i-c)*(i-c))+((j-l)*(j-l))-c*c)<=4)
{
printf("#");
}
else
printf(" ");
}
printf("\n");
}
return 0;
}
