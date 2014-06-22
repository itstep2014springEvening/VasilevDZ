#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max,min,c,nod,nok,d;
    printf("vvedite a \n");
    scanf("%d",&a);
    printf("vvedite b \n");
    scanf("%d",&b);
    max=(a>b?a:b);
    min=(a<b?a:b);
    printf("min = %d\t\n",min);
    printf("max = %d\t\n",max);
    c=max-min;
    printf("raznost' max-min = %d\n\t",c);
    if (max%min==0)
    {
        printf("nod = %d\n\t",min);
    }
    else
    {
        if (max%c==0 && min % c ==0)
        {
            printf("nod = %d\n\t", c);
        }
        do
        {
            if(a>b)
            {
                a=a%b;
            }
            else b=b%a;
        }
        while(a!=0&&b!=0);
        nod=a+b;
        printf("nod = %d\n",a+b);
    }
    printf("a=\n\t",b);
    scanf("%d",&b);
    printf("b=\n\t",a);
    scanf("%d",&a);
    nok = (b)*(a/nod) ;
    printf("nok=%d",nok);
    return 0;
}


