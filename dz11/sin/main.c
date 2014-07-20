#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,a,l;
    printf("vvedite tocnnos'\n");
    scanf("%lf",&l);
     printf(" x \t nash sin(x) \t funsin(x) \t nash sin(x)-funsin(x)\n\n");
    for (x=-2.0;x<2.1;x=x+0.1){
    double sum=x,dobavka=x,eps=l;
    int i=1;
    int j=1;
    int k=-1;
    while(fabs(dobavka)>eps)
    {
        dobavka=dobavka*(x*x)/((i+1)*(i+2));
        sum=sum + pow(k,j)*dobavka;
        ++i;
        ++i;
        ++j;

    }

    a=sin(x);
   printf(" %.1f \t %f \t %f \t %f \t \n",x,sum,a,sum-a);
    }
}
