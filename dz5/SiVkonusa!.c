#include <stdio.h>

#include <math.h>
int main()
{


   float r,h;
   float c,l,s,v;

   printf("vvedite Radius");
   scanf("%f",&r);
   printf("vvedite visotu ");
   scanf("%f",&h);
   printf("\n dlina rebra konusa =  ");

   c = h* h + r * r;
   l=sqrt(c);
   printf ("sqrt %f", sqrt (c) );

   printf("\n S= ");
   s=3.14*r*(l+r);
   printf("%f",s);

   printf("\n V=");
   v=3.14*r*r*h/3;
   printf("%f",v );
    return 0;
}
