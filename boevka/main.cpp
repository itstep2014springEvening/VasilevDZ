#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int randomchanceeasy,randomchancemid,randomchancehard,mrandom,fight ,a;
    srand(time(NULL));
    mrandom=rand()%6;
    if (mrandom>0)
    {
        mrandom=1;
    }
    else
    {
        mrandom=0;
    }
    randomchanceeasy=rand()%9;
    if (randomchanceeasy>0)
    {
        randomchanceeasy=1;
    }
    else
    {
        randomchanceeasy=0;
    }
    randomchancemid=rand()%5;
    if (randomchancemid>0)
    {
        randomchancemid=1;
    }
    else
    {
        randomchancemid=0;
    }
    randomchancehard=rand()%2;
    if (randomchancehard>0)
    {
        randomchancehard=1;
    }
    else
    {
        randomchancehard=0;
    }
    printf("(\./)(-_-)(\./) VS (-_-)");
    double hpHero=1000,hpM=1000;

    do
    {
        printf("mounster hp -  %f , your hp - %f\n",hpM,hpHero);
        printf("(\./)(-_-)(\./) VS (-_-)\n");
        printf("viberite tip otaki 1 , 2 ,3\n ");
        printf("vernaya otaka\n");
        printf("mb popadu , no urona pobolee budet\n ");
        printf("krit otaka, trudno popast' \n");
        scanf("%d",&fight);
        switch (fight)
        {
        case 1:
            hpM= hpM- (1+rand()%2)*50*(randomchanceeasy);
            hpHero=hpHero-150*mrandom;
            break;
        case 2:
            hpM= hpM- (3+rand()%2)*50*(randomchancemid);
            hpHero=hpHero-150*mrandom;
            break;
        case 3:
            hpM= hpM- (4+rand()%4)*50*(randomchancehard);
            hpHero=hpHero-150*mrandom;
            break;
        }
    }
    while ( hpHero > 0 && hpM > 0);
    system("cls");
    if(hpHero>0&&hpM<0)
    {
        printf("you win the fight !");
    }
    if(hpHero==hpM)
    {
        printf("NICH'YA");
    }
    if(hpHero<0&&hpM>0)
    {
        printf("you lost, try again next time !");
    }

}
