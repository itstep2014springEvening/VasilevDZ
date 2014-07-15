#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int hod(int a);
int main()
{
    printf("ya hochu sigrat' s toboy v igru !\n");

    int a,c1,c2,c3,c4;
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
        printf("nich'ya");
    }
    if (c1+c2<c3+c4)
    {
        printf("LOSER");
    }
}


int hod(int a)
{
    switch (a)
    {
    case 1:
        printf("  _____\n |     |\n |  *  |\n |     |\n  -----\n");
        break;
    case 2:
        printf("  _____\n |*    |\n |     |\n |    *|\n  -----\n");
        break;
    case 3:
        printf("  _____\n |*    |\n |  *  |\n |    *|\n  -----\n");
        break;
    case 4:
        printf("  _____\n |*   *|\n |     |\n |*   *|\n  -----\n");
        break;
    case 5:
        printf("  _____\n |*   *|\n |  *  |\n |*   *|\n  -----\n");
        break;
    case 6:
        printf("  _____\n |*   *|\n |*   *|\n |*   *|\n  -----\n");
        break;

    }
}
