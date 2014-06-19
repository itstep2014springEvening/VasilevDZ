#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;

    printf("vvedite chislo a \n");
    scanf ("%d",&a);
    printf("vvedite chislo b \n");
    scanf("%d",&b);
    if (b!=0)
    {
        printf("summa %d\n",a+b,a,b);
        printf("raznos' %d\n",a-b,a,b);
        printf("proizvedenie %d\n",a*b,a,b);
        printf("delenie %d\n",a/b,a,b);
        printf("ostatok ot deleniya %d\n",a%b,a,b);

    }
    else
    {
        printf("atata!, na 0 delit' nizya!, vot ostal'noe !\n");
        printf("summa %d\n",a+b,a,b);
        printf("raznos' %d\n",a-b,a,b);
        printf("proizvedenie %d\n",a*b,a,b);

    }
    if (a>b)
    {
        printf("a=max\nb=min");

    }
    if (a==b)
    {
        printf("vvedennie vami chisla ravni!");
    }
    if (b>a)
    {
        printf("b=max\na=min ");
    }

    return 0;
}
