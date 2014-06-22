#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c,b,a;

    printf("vvedite pervoe chislo\n");
    scanf("%d",&a);
    printf("vvedite b\n");
    scanf("%d",&b);
    printf("vvedite c\n");
    scanf("%d",&c);
    if (a!=0&&b!=0&&c!=0)
    {
        printf("summa %d\n",(a+b+c));
        printf("raznos' %d\n",a-b-c);
        printf("proizvedenie %d\n",a*b*c);
        printf("delenie %d\n",a/b/c);
        printf("ostatok %d\n",a%b%c);

    }
    else
    {
        printf("na 0 delit nizya,atata!");
        printf("summa %d\n",(a+b+c));
        printf("raznos' %d\n",a-b-c);
        printf("proizvedenie %d\n",a*b*c);
    }
}
