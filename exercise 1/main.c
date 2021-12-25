/*Name:Kaveh Masoudinia
Section 10 Exercise 1
Date:12/23/2021(1400/10/02)*/
#include <stdio.h>

int n;
struct measured_data_t{
    char Sid[100];
    int Wspeed;
    char D_of_month[100];
    int temp;
};
struct measured_data_t x[100];
void scan();
void Maxtemp();
void MaxWS();

int main() {
    scan();
    MaxWS();
    Maxtemp();

    return 0;
}
void scan(){
    printf("How many weather sites do you want to enter?:\n ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("Site Id:\n");
        scanf("%s",x[i].Sid);
        printf("Enter day on month:\n");
        scanf("%s",x[i].D_of_month);
        printf("Wind Speed:\n");
        scanf("%d",&x[i].Wspeed);
        printf("Temperature:\n");
        scanf("%d",&x[i].temp);
    }
}
void Maxtemp(){
    int i;
    float total = 0, avgmarks;
    for (i = 0; i < n; i++) {
        total = total + x[i].temp;
    }
    avgmarks = total / n;
    printf("\nAverage Temp = %.1f C", avgmarks);
}

void MaxWS() {
    int i;
    float total = 0, avgmarks;
    for (i = 0; i < n; i++) {
        total = total + x[i].Wspeed;
    }
    avgmarks = total / n;
        printf("\nAverage Windspeed = %.1f knots", avgmarks);

}