#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char virajenie;
    printf("vvedite chislo nomer 1\n");
    scanf("%d",&a);
    printf("vvedite znak\n");
    scanf("%s",&virajenie);
    printf("vvedite chislo nomer 2\n");
    scanf("%d",&b);
    switch (virajenie)
    {
    case '+' :

        printf("otvet = %d",a+b);
        break;
    case '-' :

        printf("otvet = %d",a-b);
        break;
    case '*':

        printf("otvet = %d",a*b);
        break;
    case '/':

        printf("otvet = %f",(double)a/b);
        break;

    }
    return 0;
}

