
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=100;
    int x=0,i=0,top=100,bias=0;
    int memory[n],instruction=0;
    int akkamulyator=0;
    int adress;
    int operathion;
// bias = memory[];
    printf("vvedite vashi komandi ! \n");
    while (x!=-99999)
    {
        printf("%02d ", i);
        scanf("%d",&x);
        memory[i]=x;
        ++i;
    }
    printf("poehali\n");
    do
    {
        if (memory[instruction]<0)
        {
            operathion=(-memory[instruction]/100) ;
        }
        else
            operathion=(memory[instruction]/100);

        adress=memory[instruction]%100;
        switch (operathion)
        {
        case 10:
            scanf("%d",&memory[adress+bias]);
            instruction++;
            break;
        case 11:
            printf("%+05d\n",memory[adress+bias]);
            instruction++;
            break;
        case 20:
            akkamulyator=memory[adress+bias];
            instruction++;
            break;
        case 21:
            memory[adress+bias]=akkamulyator;
            instruction++;
            break;
        case 22:
            akkamulyator=top;
            instruction ++;
            break;
        case 23:
            top=akkamulyator;
            instruction++;
            break;
        case 24:
            akkamulyator=bias;
            instruction++;
            break;
        case 25:
            bias=akkamulyator;
            instruction++;
            break;
        case 26:
            memory[--top]=akkamulyator;
            instruction++;
            break;
        case 27:
            akkamulyator=memory[top++];
            instruction++;
            break;

        case 30:
            akkamulyator+=memory[adress+bias];
            instruction++;
            break;
        case 31:
            akkamulyator-=memory[adress+bias];
            instruction++;
            break;
        case 32:
            akkamulyator/=memory[adress+bias];
            instruction++;
            break;
        case 33:
            akkamulyator*=memory[adress+bias];
            instruction++;
            break;
        case 34:
            akkamulyator=adress;
            instruction++;
            break;
        case 40 :
            instruction=adress;
            break;
        case 41:
            if (akkamulyator<0)
                instruction=adress;
            else
                instruction++;
            break;

        case 42:
            if (akkamulyator==0)
                instruction=adress;
            else
                instruction++;
            break;

        case 43:
            printf("end\n");
            break;
        case 44:
            memory[--top]=instruction;
            instruction=adress;
            break;
        case 45 :
            instruction=memory[top++]+1;
            for(int i=0; i<abs(adress); i++)
                ++top;
            break;
        }
    }
    while(operathion!=43);
    return 0;
}

