#include<stdio.h>
#include <stdlib.h>
int main()
{
    int luna;
    printf("Introduceti un numar, reprezentand luna careia doriti sa ii aflati numarul de zile: ");
    scanf("%d",&luna);
    if(luna>12||luna<1)
        printf("\nNumarul introdus nu reprezinta o luna!");
    else
    {
        printf("Luna ");
        switch(luna)
        {
        case 1:
            printf("ianuarie (1) are 31 de zile.");
            break;
        case 2:
            printf("februarie (2) are 28/29 de zile, in functie de anul in care de aflii.");
            break;
        case 3:
            printf("martie (3) are 31 de zile.");
            break;
        case 4:
            printf("aprilie (4) are 30 de zile.");
            break;
        case 5:
            printf("mai (5) are 31 de zile.");
            break;
        case 6:
            printf("iunie (6) are 30 de zile.");
            break;
        case 7:
            printf("iulie (7) are 31 de zile.");
            break;
        case 8:
            printf("august (8) are 31 de zile.");
            break;
        case 9:
            printf("septembrie (9) are 30 de zile.");
            break;
        case 10:
            printf("octombrie (10) are 31 de zile.");
            break;
        case 11:
            printf("noiembrie (11) are 30 de zile.");
            break;
        case 12:
            printf("decembrie (12) are 31 de zile.");
            break;
        default:
            break;
        }
    }
    return 0;
}

