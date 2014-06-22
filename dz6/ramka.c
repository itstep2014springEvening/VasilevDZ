#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int a,b,e,f;
    printf("vvedite dlinu a = ",a);
    scanf("%d",&a);
    printf("vvedite visotu b = ",b );
    scanf("%d",&b);
    e=a-1;
    f=b-1;
    c= '#';



    for (int i=1; i<=b; i++)
    {
        for (int j=1; j<=a; j++)
        {
            if (i==1 ||  i==b  || j==a || j==1  )
                printf("%c",c);
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}
