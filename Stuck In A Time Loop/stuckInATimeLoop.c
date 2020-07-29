#include <stdio.h>

void stuckInATimeLoop(){
    int i;
    int num;
    scanf("%d",&num);
    for(i=0;i < num;i++){
        printf("%d Abracadabra\n",i+1);
    }
}

int main(){
    stuckInATimeLoop();
    return 0;
}