#include <stdio.h>

int main(){
    int testCases;
    double qaly;
    double year;
    double aqaly = 0;
    int i;

    scanf("%d\n",&testCases);
    for(i=0;i<testCases;i++){
        scanf("%lf %lf\n",&qaly, &year);
        // printf("%lf %lf\n",qaly,year);
        aqaly = aqaly + (qaly*year);
    }
    printf("%.3lf\n", aqaly);
    return 0;
}