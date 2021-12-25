/*Name:Kaveh Masoudinia
Section 10 Exercise 4
Date:12/25/2021(1400/10/04)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct info{
    float intR;
    int duration;
    float moPay;
    float total;
};
struct info l[100];
float lAmount=50000,Tm;
float payment,Mi,formul1,formul2,formul3,Tpay,Mpay;

void scan();


int main() {
    FILE *infile;
    scan();
    infile = fopen ("file1.txt", "w");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
    struct info inp1 = {1, Tpay};
    struct info inp2 = {2, Mpay};
    fwrite (&inp1, sizeof(struct info), 1, infile);
    fwrite (&inp2, sizeof(struct info), 1, infile);
    if(fwrite != 0)
        printf("\nContents to file written successfully !\n");
    fclose (infile);
    return 0;
}
void scan(){
    for (int i = 0; i < 1; ++i) {
        printf("Enter your interest rate:\n");
        scanf("%2f",&l[i].intR);
        printf("Enter your Loan term:\n");
        scanf("%d",&l[i].duration);
    }
    Mi=l[0].intR/12;
   Tm=l[0].duration*12;
   formul1=Mi*lAmount;
   formul2= powf(1+Mi,0-Tm);
   formul3=1-formul2;
   payment=formul1/formul3;
    Tpay=payment+lAmount;
    Mpay=Tpay/Tm;
    printf("\nTotal payment:%.0f\nMonthly payment:%.0f",Tpay,Mpay);
}
