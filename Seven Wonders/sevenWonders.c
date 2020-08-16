#include <stdio.h>
#include <string.h>
void sevenWonders(){
    char string[51];
    int i,t=0,c=0,g=0;
    int points = 0;
    scanf("%s\n",string);
    for(i=0;i<strlen(string);i++){
        switch(string[i]){
            case 'T':
                 t++;
                break;
            case 'C':
                c++;
                break;
            default:
                g++;
                break;
        }
    }
    points = t*t + c*c + g*g;
    while(t != 0 && c != 0 && g != 0){
        t--;
        c--;
        g--;
        points+=7;
    }
    printf("%d\n",points);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        sevenWonders();
    }
    printf("\n");
}

int main(){
    sevenWonders();
    return 0;
}