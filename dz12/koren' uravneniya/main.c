#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double d,x1,x2,a,b,c;
    printf("vvedite A\n");
    scanf("%lf",&a);
    printf("vvedite b\n");
    scanf("%lf",&b);
    printf("vvedite c\n");
    scanf("%lf",&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("korney net ");
    }
    if(d>=0)
    {
        x1= ((-b) + sqrt(d))/(2*a);
        x2= ((-b) - sqrt(d))/(2*a);
        printf("x1=%f\n",x1);
        printf("x2=%f\n",x2);

    }
    return 0;
}
