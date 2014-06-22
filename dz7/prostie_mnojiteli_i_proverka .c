#include <stdio.h>
main()
{
long int a;
long int i;
printf("sizeof(long int) = %d\n", sizeof(long long int));
i=3;
//a=1000000007;
printf("enter number: ");
scanf("%d", &a);
printf("%d=1",a);
while(a%2==0)
{
printf("*%d",2);
a=a/2;
}

while(i<=a +1)
{
while(a%i==0)
{
printf("*%d",i);
a=a/i;
}
i=i+2;
}
printf("\n");
printf("esli chislo vido 1*A(gde a nashe chislo), to a- prostoe chislo");
}
