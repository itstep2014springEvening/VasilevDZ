#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b;
    printf("vvedite nujnuu vasm sistemu ischeslenia?\n");
    scanf("%d",&b);
    if (b<2||b>36)
    {
        printf("nizya,vvedite drugoe!");
    }

    else
        printf("vvedite vashe chislo\n");
    scanf("%d",&x);
    printf("vashe chislo pri perevode v %d sistemu ischislenie stalo ravnim \n x=",b);
    perevod (x,b);
    return 0;
}
