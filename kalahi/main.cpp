#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int check(int a[]);
void game(int a[]);
void startdesk(int a[]);
void risovalkaStart(int a[]);
void hodik1(int a[],int peremennaya, int yacheyka, int player);
void hodik2(int a[],int peremennaya, int yacheyka, int player);
int main()
{
    int a[14];
    startdesk(a);
    risovalkaStart(a);
    game(a);
    return 0;
}
void risovalkaStart(int a[])
{

    printf ("##### 6 # 5 # 4 # 3 # 2 # 1 #####\n");
    printf ("#################################\n");
    printf ("#   #   #   #   #   #   #   #   #\n");
    printf ("#   #%3d#%3d#%3d#%3d#%3d#%3d#   #\n",a[5],a[4],a[3],a[2],a[1],a[0]);
    printf ("#   #   #   #   #   #   #   #   #\n");
    printf ("#%3d#########################%3d#\n",a[6],a[13]);
    printf ("#   #   #   #   #   #   #   #   #\n");
    printf ("#   #%3d#%3d#%3d#%3d#%3d#%3d#   #\n",a[7],a[8],a[9],a[10],a[11],a[12]);
    printf ("#   #   #   #   #   #   #   #   #\n");
    printf ("#################################\n");
    printf ("##### 1 # 2 # 3 # 4 # 5 # 6 #####\n");

};

void game (int a[])
{
    int yacheyka;
    int checkay;
    printf("let's play kalah!");
    do
    {
        checkay=check(a);
        int peremennaya, player;
        do
        {
            printf("player 1 turn !");
            scanf("%d",&yacheyka);
            if(yacheyka>6||yacheyka<0)
            {
                printf("atata!iz kalaha nizya dvigat'!vvedite eshe raz");
                scanf("%d",&yacheyka);
            }
            yacheyka=yacheyka-1;
        }
        while(a[yacheyka]==0);
        peremennaya=a[yacheyka];
        a[yacheyka]=0;
        player=1;
        hodik1(a, peremennaya, yacheyka, player);
        system("clear");
        risovalkaStart(a);
        do
        {
            printf("player 2 turn !");
            scanf("%d",&yacheyka);
            if(yacheyka>6||yacheyka<0)
            {
                printf("atata!iz kalaha nizya dvigat'!vvedite eshe raz");
                scanf("%d",&yacheyka);
            }

            yacheyka=yacheyka+6;
        }
        while(a[yacheyka]==0);
        peremennaya=a[yacheyka];
        a[yacheyka]=0;
        player=2;
        hodik2(a, peremennaya, yacheyka, player);
        system("clear");
        risovalkaStart(a);
    }
    while (checkay==0);
    printf(" player1 = %d\n player2 = %d\n", a[6], a[13]);
    if(checkay==1)
    {
        printf("player1 win");
    }
    if(checkay==2)
    {
        printf("player2 win ");
    }
    if(checkay==3)
    {
        printf("nich'ya");
    }
}
int check (int a[])
{
    int player1=0,player2=0;
    if (a[6]>36)
    {
        return 1;
    }
    if (a[13]>36)
    {
        return 2;
    }
    if((a[0]==36)&&(a[7]==36))
    {
        return 3;
    }
    if ((a[7]==0)&&(a[8]==0)&&(a[9]==0)&&(a[10]==0)&&(a[11]==0)&&(a[12]==0))
    {
        player1=a[6]+a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    }
    if ((a[0]==0)&&(a[1]==0)&&(a[2]==0)&&(a[3]==0)&&(a[4]==0)&&(a[5]==0))
    {
        player2=a[13]+a[7]+a[8]+a[9]+a[10]+a[11]+a[12];
    }
    if(player1>player2)
    {
        return 1;
    }
    if(player2>player1)
    {
        return 2;
    }
    if((player2==36)&&(player1==36))
    {
        return 3;
    }
    return 0;
};
void startdesk(int a[])
{
    for(int i=0; i<14; i++)
    {
        a[i]=6;
    }
    a[6]=0;
    a[13]=0;
};
void hodik1(int a[], int peremennaya, int yacheyka, int player)
{

    for (peremennaya; peremennaya!=0;-- peremennaya)
    {
        ++yacheyka;
        a[yacheyka]=a[yacheyka]+1;
        if(yacheyka>13)
        {
            yacheyka=0;
        }
        if(peremennaya==1)
        {
            if(yacheyka==13)
            {
                a[yacheyka]-=1;
                a[0]+=1;
            }
            while (yacheyka==6)
            {
                system("clear");
                risovalkaStart(a);
                printf("u tebya bonus hod , hodi po novoy");
                scanf("%d", &yacheyka);
                if(player==1)
                {
                    yacheyka=yacheyka-1;
                }
                peremennaya=a[yacheyka];
                a[yacheyka]=0;
                hodik1(a, peremennaya, yacheyka, player);
            }
            if(a[yacheyka]==1 &&yacheyka!=6 && yacheyka!=13)
            {
                int poedanie=0;
                if(yacheyka<6)
                {
                    poedanie=6-yacheyka;
                    poedanie=poedanie+6;
                }
                else
                {
                    poedanie=yacheyka-6;
                    poedanie=6-poedanie;
                }
                if(a[poedanie]!=0)
                {
                    if(player==1)
                        a[6]=a[6]+1+a[poedanie];
                    else
                        a[13]=a[13]+1+a[poedanie];

                    a[poedanie]=0;
                    a[yacheyka]=0;
                }
            }
        }
    }
}
void hodik2(int a[], int peremennaya, int yacheyka, int player)
{

    for (peremennaya; peremennaya!=0; -- peremennaya)
    {
        ++yacheyka;
        a[yacheyka]=a[yacheyka]+1;
        if(yacheyka>13)
        {
            yacheyka=0;
        }
        if(peremennaya==1)
        {    if(yacheyka==6)
            {
                a[yacheyka]-=1;
                a[7]+=1;
            }
            while (yacheyka==13)
            {
                system("clear");
                risovalkaStart(a);
                printf("u tebya bonus hod , hodi po novoy");
                scanf("%d", &yacheyka);
                if(player==2)
                {
                    yacheyka=yacheyka+6;
                }

                peremennaya=a[yacheyka];
                a[yacheyka]=0;
                hodik2(a, peremennaya, yacheyka,player);
            }
            if(a[yacheyka]==1 &&yacheyka!=6 && yacheyka!=13)
            {
                int poedanie=0;
                if(yacheyka<6)
                {
                    poedanie=6-yacheyka;
                    poedanie=poedanie+6;
                }
                else
                {
                    poedanie=yacheyka-6;
                    poedanie=6-poedanie;
                }
                if(a[poedanie]!=0)
                {
                    if(player==1)
                        a[6]=a[6]+1+a[poedanie];
                    else
                        a[13]=a[13]+1+a[poedanie];

                    a[poedanie]=0;
                    a[yacheyka]=0;
                }
            }
        }
    }
}
