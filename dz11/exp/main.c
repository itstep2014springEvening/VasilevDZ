#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,eps,a;
    printf("vvedite tochnost' \n");
    scanf("%lf",&eps);
    printf(" x \t nash exp(x) \t funexp(x) \t nash exp(x)-funexp(x)\n\n");
    for (x=-2.0;x<2.1;x=x+0.1){
    double sum=1.0,dobavka=1;
    int i=1;
    while(fabs(dobavka)>eps)
    {
        dobavka*=x/i;
        sum+=dobavka;
        ++i;

    }

    a=exp(x);
   printf(" %.1f \t %f \t %f \t %f \t \n",x,sum,a,sum-a);
}
}
