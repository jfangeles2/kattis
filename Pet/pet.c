#include <stdio.h>
void pet(){
    int scores[4];
    int total;
    int highestScore = 0;
    int highestIndex = 0;
    int i;
    for(i = 0;i<5;i++){
        total = 0;
        scanf("%d %d %d %d\n",&(scores[0]),&(scores[1]),&(scores[2]),&(scores[3]));
        total = scores[0] + scores[1] + scores[2] + scores[3];
        // printf("%d %d %d\n",i,highestIndex,total);
        if(total >= highestScore){
            highestScore = total;
            highestIndex = i+1;
        }
    }
    printf("%d %d\n",highestIndex, highestScore);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        pet();
    }
}

int main(){
    pet();
    return 0;
}