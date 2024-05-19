#include <stdio.h>
void main()
{
    FILE *fp, *fptr;
    char ch;
    int id;

    fp = fopen("H:/Software development/C++ programming/Workspace/DSA/output.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}