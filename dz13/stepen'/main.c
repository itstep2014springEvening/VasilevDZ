#include <stdio.h>
#include <stdlib.h>
double vozvedenievstepen(double x , int y);
int main()
{
    int y;
    double  x,a;
    printf("vvedite chislo x :\n");
    scanf("%lf",&x);
    if (x==0)
    {
        printf("\a\a\a atata,nizya!");
    }
    else
        printf("vvedite stepen' y: \n");
    scanf("%d",&y);
    a=vozvedenievstepen(x,y);
    printf("otvet=%g",a);
    return 0;
}
double vozvedenievstepen(double x,int y)
{
    double a=1.0 ;
    if (y>0)
    {
        for (int i=1; i<=y ; i++)
        {
            a=x*a;
        }
    }
    if (y==0)
    {
        a=1.0;
    }
    if (y<0)
    {
        y=y*(-1);
        for (int i=1; i<=y; i++)
        {
            a=x*a;
        }
        a=1.0/a;
    }
    return a;
}
