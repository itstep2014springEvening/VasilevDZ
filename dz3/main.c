.#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("vvedite 1 chislo");
    scanf("%d",&a);
    printf("vvedite 2 chislo ");
    scanf("%d",&b);
    printf("\n summa = ");
    printf("%d + %d=%d",a,b,a+b);
    printf("\n raznost' = ");
    printf("%d - %d=%d",a,b,a-b);
    printf("\n proizvedenie = ");
    printf("%d * %d=%d",a,b,a*b);
    printf("\n delenie(celaya chast') = ");
    printf("%d / %d=%d",a,b,a/b);
    printf("\n ostatok ot nashego deleniya = ");
    printf("%d %% %d=%d",a,b,a % b);
    printf("\n by Vasilev V.V.");
    return 0;
}
