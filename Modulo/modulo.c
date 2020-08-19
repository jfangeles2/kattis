#include <stdio.h>

void modulo(){
    int divisor = 42;
    int i,dividend,j,remainderCount=0,rem;
    int remainders[10];
    for(i=0;i<10;i++){
        scanf("%d\n",&dividend);
        rem = dividend%divisor;
        for(j=0;j<remainderCount;j++){
            if(remainders[j] == rem){
                break;
            }
        }
        if(j == remainderCount){
            remainders[remainderCount++] = rem;
        }
    }
    printf("%d\n",remainderCount);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        modulo();
    }
}

int main(){
    modulo();
    return 0;
}