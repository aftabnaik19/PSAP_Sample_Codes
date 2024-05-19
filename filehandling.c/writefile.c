#include <stdio.h>
void main()
{
    FILE *fp, *fptr;
    char ch;
    int id;
    char name[30], buff[255];
    float salary;

    fptr = fopen("H:/Software development/C++ programming/Workspace/DSA/output.txt", "rw+");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}