#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,a,e;
    printf("vvedite tochnost' \n");
    scanf("%lf",&e);

    printf(" x \t nash cos(x) \t funcos(x) \t nash cos(x)-funcos(x)\n\n");
    for (x=-2.0;x<2.1;x=x+0.1){
    double sum=1,dobavka=1,eps=e;
    int i=1;
    int j=1;
    int k=-1;
    while(fabs(dobavka)>eps)
    {
        dobavka=dobavka*(x*x)/((i+1)*(i));
        sum=sum + pow(k,j)*dobavka;
        ++i;
        ++i;
        ++j;

    }

    a=cos(x);
   printf(" %.1f \t %f \t %f \t %f \t \n",x,sum,a,sum-a);
    }
}

