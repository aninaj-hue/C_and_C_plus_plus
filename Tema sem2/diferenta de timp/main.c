#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int h1,h2,m1,m2,s1,s2,hr,sr,mr,sec1,sec2;
	printf("Introduceti momentele de timp in format h m s ");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Introduceti momentele de timp in format h m s ");
    scanf("%d%d%d",&h2,&m2,&s2);

    sec1=h1*60*60+m1*60+s1;//transformam momentele in secunde
    sec2=h2*60*60+m2*60+s2;
    int rezultat=abs(sec1-sec2);//rezultatul dintre diferenta lor il transformam din secunde in minute si ore
    sr=rezultat%60;
    rezultat-=sr;
    rezultat/=60;
    mr=rezultat%60;
    rezultat-=mr;
    hr=rezultat/60;

    printf("Diferenta dintre momentele introduse este de(format h m s): %d %d %d",hr,mr,sr);
    return 0;
}
