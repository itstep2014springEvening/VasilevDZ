#include <stdio.h>
#include <stdlib.h>
int nod(int i,int j);


int main()
{
    int n;
    printf("vvedite razmer polya\n");
    scanf("%d",&n);


    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            printf("%c",nod(i,j)==1?'#':' ');

        }
        printf("\n");

    }
}
    int nod(int i,int j)
    {
        while(i!=j)
        {
            if(i>j)
            {

                i-=j;
            }
            else
                j-=i;
        }
        return ;
    }

