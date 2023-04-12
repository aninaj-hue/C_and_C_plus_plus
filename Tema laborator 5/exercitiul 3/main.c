#include <stdio.h>
#include <stdlib.h>

char hex[100010];
int binar[1000100];

int main()
{
    int n, decimal=0, rest, i=0;
    printf("Introduceti cate cifre contine numarul binar: ");
    scanf("%d",&n);
    printf("Introduceti numarul binar, cu spatiu intre fiecare cifra: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&binar[i]);
    }

    for(int i=0;i<n;i++)
    {
        decimal=decimal+(binar[i]%10)*pow(2,n-i-1);
    }
    //decimal->hex
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

