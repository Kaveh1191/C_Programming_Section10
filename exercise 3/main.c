/*Name:Kaveh Masoudinia
Section 10 Exercise 3
Date:12/25/2021(1400/10/04)*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
    int main(){

        char ch;
        FILE *fp1 = fopen("file1.txt", "r");
        FILE *fp2 = fopen("file2.txt", "w");

        if (fp1 == NULL || fp2 == NULL )
        {
            puts("Could not open files");
            exit(0);
        }
        while ((ch = fgetc(fp1)) != EOF) {
            if (ch >= 'A' && ch <= 'Z') {
                fputc(ch, fp2);
            }
        }

}