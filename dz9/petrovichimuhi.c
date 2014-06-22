#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flyReturnSpeed,exorcismSpeed,fatigueTime,n,uslovievigona,a;
    printf("vvedite chislo myx",n);
    scanf("%d",&n);
    printf("vvedite skorost' vigonki myx",exorcismSpeed);
    scanf("%d",&exorcismSpeed);
    printf("vvedite T ustalost' glavnogo geroya",fatigueTime);
    scanf("%d",&fatigueTime);
    printf("vvedite chislo myx zaletnih obratno",flyReturnSpeed);
    scanf("%d",&flyReturnSpeed);
    if((exorcismSpeed==flyReturnSpeed &&exorcismSpeed>0)|| exorcismSpeed<flyReturnSpeed)
    {
        printf("ivan vasilich proigralm taki nizya!");
    }
    else
    {
        uslovievigona=n;
        for (a=0; uslovievigona>0; a++)
        {
            if (a%fatigueTime==0 && a!=0)
            {
                exorcismSpeed=(exorcismSpeed-exorcismSpeed*20/100);
            }
            uslovievigona=uslovievigona-exorcismSpeed+flyReturnSpeed;
        }

       printf("on smoget cherez %d  minut ",a);
    } return 0;
}
