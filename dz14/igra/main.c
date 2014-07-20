#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myhod.h"

int main()
{
    printf("ya hochu sigrat' s toboy v igru !\n");
    int a,c1,c2,c3,c4;
    char k;
    printf("vash hod,sudar'\n");
    srand (time(NULL) );
    a = rand()%6+1;
    hod(a);
    c1=a;
    a=rand()%6+1;
    hod(a);
    c2=a;
    printf("summa %d\n",c1+c2);
    printf("hod sopernika,milsdar'\n");
    a = rand()%6+1;
    hod(a);
    c3=a;
    a = rand()%6+1;
    hod(a);
    c4=a;
    printf("summa %d\n",c3+c4);

    if(c1+c2>c3+c4)
    {
        printf("WINNER");
    }
    if (c1+c2==c3+c4)
    {
        printf("draw");
    }
    if (c1+c2<c3+c4)
    {
        printf("LOSER");
    }
}


