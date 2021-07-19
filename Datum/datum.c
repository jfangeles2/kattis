#include <stdio.h>

void datum(){
    //1    2    3   4   5   6   0
    //th   f    sa  su  m   t   w
    int month, day, daysPassed=0;
    scanf("%d %d\n",&day,&month);
    switch(month){
        case 12:
            daysPassed+=30;
        case 11:
            daysPassed+=31;
        case 10:
            daysPassed+=30;
        case 9:
            daysPassed+=31;
        case 8:
            daysPassed+=31;
        case 7:
            daysPassed+=30;
        case 6:
            daysPassed+=31;
        case 5:
            daysPassed+=30;
        case 4:
            daysPassed+=31;
        case 3:
            daysPassed+=28;
        case 2:
            daysPassed+=31;
        default:
            daysPassed+=day-1;
    }
    switch(daysPassed%7){
        case 0:
            printf("Thursday\n");
            break;
        case 1:
            printf("Friday\n");
            break;
        case 2:
            printf("Saturday\n");
            break;
        case 3:
            printf("Sunday\n");
            break;
        case 4:
            printf("Monday\n");
            break;
        case 5:
            printf("Tuesday\n");
            break;
        case 6:
            printf("Wednesday\n");
            break;
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        datum();
    }
}

int main(){
    datum();
    return 0;
}