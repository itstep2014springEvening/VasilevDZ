#include <stdio.h>
#include <stdlib.h>

int main()
{
char n0 = 0;
int n1 = 0;
int r = 0;
int r2 = 16;
printf("vvedite skolko nado simvolov");
scanf("%d", &n1);
for (int n = 0;n<n1;n++)
{
if(n==r)
{
printf("\n");
r=r+r2;
}
printf("%c ", n0);
n0 ++;
}
return 0;
}
