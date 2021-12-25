/*Name:Kaveh Masoudinia
Section 10 Exercise 2
Date:12/23/2021(1400/10/02)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "w");

    if (fp1 == NULL || fp2 == NULL )
    {
        puts("Could not open files");
        exit(0);
    }
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp2);
    printf("Merged file1.txt and file2.txt ");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
