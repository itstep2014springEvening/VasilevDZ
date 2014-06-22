#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,  i, j,c;

    printf("vvedite shirinu romba");
    scanf("%d",&d);

    for(i=0; i<=d*2; i++)
    {
        for(j=0; j<=d*2; j++)
        {
            if (abs(i-d)+abs(j-d)<=d/2)
            {
                printf("#");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
