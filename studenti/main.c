#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// structura articole din fisier
typedef struct
{
    char nume[25];
    float medie;
} Elev;
void read_students(int number, Elev* students);
int write_students_to_file(char* filename, Elev* students, int
                           number);
int read_students_from_file(char* filename, Elev* students);
int main ()
{
    int number;
    Elev* students;
    char* filename="file";
    printf("Give number of students:\n");
    scanf("%d", &number);
    students = calloc(number, sizeof(Elev));
    if(students == NULL)
    {
        return -1;
    }
    read_students(number, students);
    write_students_to_file(filename, students, number);
    read_students_from_file(filename, students);
    return 0;
}
void read_students(int number, Elev* students)
{
    printf("Input students:\n");
//char *p;
    for(int i=0; i<number; i++)
    {
        printf("Name: ");
        while ((getchar()) != '\n'); //This will consume the '\n' char
        {
            fgets (students[i].nume, 25*sizeof(char), stdin);
        }
        printf("Grade: ");
        scanf("%f", &students[i].medie);
    }
}
int write_students_to_file(char* filename, Elev* students, int number)
{
    FILE* file = fopen(filename, "wb");
    if(file==NULL)
    {
        printf("File is null. Exiting.\n");
        return -1;
    }
    for(int i=0; i<number; i++)
    {
        fwrite(&students[i], sizeof(students[i]), 1, file);
    }
    fclose(file);
    return 0;
}
int read_students_from_file(char* filename, Elev* students)
{
    FILE* file=fopen(filename, "rb");
    if(file==NULL)
    {
        printf("File is null. Exiting.\n");
        return -1;
    }
    int i=0;
    while(fread(&students[i], sizeof(students[i]), 1, file)==1)
    {
        printf("Student name: %s, grade: %f\n", students[i].nume,
               students[i].medie);
        i++;
    }
    fclose(file);
    return 0;
}
