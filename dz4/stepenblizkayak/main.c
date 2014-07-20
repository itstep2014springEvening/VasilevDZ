#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,l,p;
    printf("vvedite chislo X \n");
    scanf("%d",&x);
    printf("vvedite chislo L' \n");
    scanf("%d",&l);
    p=0;
    while (pow(x,(p+1))>l)
    {
        p+=1;
    }
    p-=1;
    printf("%d",p);
    return 0;
}
