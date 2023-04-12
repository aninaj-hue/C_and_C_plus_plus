#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *p;
char c[100],aux,nou[100];
int main()
{
    fgets(c,sizeof(c),stdin);
    p=strtok(c," ");//dispare space
    while(p!=0){
        aux=p[0];
        p[0]=p[strlen(p)-1];
        p[strlen(p)-1]=aux;//sorteaza literele
        strcat(nou,p);//pune sirul in vect nou
        strcat(nou," ");//pune spae in vect nou
        p=strtok(NULL," ");
    }
    strcpy(c,nou);//copiaza vect nou in c
    puts(c);

}
