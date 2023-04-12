#include <stdio.h>
#include <math.h>
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 10 * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
int main()
{
    int octalNumber,decimalNumber,nr;
    printf("Choose type of input number 1 for octal and 0 for decimal : ");
    scanf("%d",&nr);
    if (nr==1) {
        printf("Enter an octal number: ");
        scanf("%d", &octalNumber);
        printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
        return 0;
    }

    else if(nr==0){
        printf("Enter a decimal number: ");
        scanf("%d", &decimalNumber);

        printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));

        return 0;
    }
    else{
        printf("incorect type of number");
    }
}
