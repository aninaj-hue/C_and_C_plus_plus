#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100], oglindit[100];
    printf("Introduceti sirul de caractere: ");
    fgets(s, sizeof(s), stdin);
    /*printf("Sirul 1 este: %s\n", s );
    puts(s);
    printf("sir\n");
    scanf("%s", s);
    printf("Sirul este %s\n", s);
*/
    strcpy(oglindit,s);
    strrev(oglindit);
    if(strcmp(oglindit,s)==0)
        {printf("Cuvantul este palindrom");}
    else
        {printf("Cuvantul nu este palindrom");}
    return 0;
}
