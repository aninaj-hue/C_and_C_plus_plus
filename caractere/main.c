#include <stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    fp = fopen("C:\\Users\\Janina\\Desktop\\PCLP lab- seminar\\caractere\\caractere.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
    return 0;
}
