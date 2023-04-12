#include <stdio.h>
#include <stdlib.h>

char hex[100001];

int main()
{
    int decimal, rest, i=0;
    printf("Introduceti numarul pe care doriti sa il transformati in baza 16: ");
    scanf("%d",&decimal);
    printf("Numarul %d in baza 16 este: ",decimal);

    while(decimal)
    {
        rest=decimal%16;
        if(rest>9)
        {
            hex[i++]=(char)(55+rest);//'A'-65
        }
        else
            hex[i++]=(char)(48+rest);//'0'-48
        decimal/=16;
    }

    while(--i)//i!=0
    {
        printf("%c",hex[i]);
    }
    printf("%c",hex[i]);//i=0

    return 0;
}

