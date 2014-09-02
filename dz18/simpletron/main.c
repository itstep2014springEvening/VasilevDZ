#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n=100;
    int x=0,i=0;
    int memory[n],instruction=0;
    int akkamulyator=0;
    int adress;
    int operathion;
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
        operathion=memory[instruction]/100;
        adress=memory[instruction]%100;
        switch (operathion)
        {
        case 10:
            scanf("%d",&memory[adress]);
            instruction++;
            break;
        case 11:
            printf("%+05d\n",memory[adress]);
            instruction++;
            break;
        case 20:
            akkamulyator=memory[adress];
            instruction++;
            break;
        case 21:
            memory[adress]=akkamulyator;
            instruction++;
            break;
        case 30:
            akkamulyator+=memory[adress];
            instruction++;
            break;
        case 31:
            akkamulyator-=memory[adress];
            instruction++;
            break;
        case 32:
            akkamulyator/=memory[adress];
            instruction++;
            break;
        case 33:
            akkamulyator*=memory[adress];
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
        }
    }
    while(operathion!=43);
    return 0;
}
