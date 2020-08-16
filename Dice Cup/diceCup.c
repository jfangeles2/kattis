#include <stdio.h>

void diceCup(){
    int a,b,low,high;
    scanf("%d %d\n",&a,&b);
    if(a>b){
        low = b;
        high = a;
    }else{
        low = a;
        high = b;
    }
    for(low = low + 1;low < high+2;low++){
        printf("%d\n",low);
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        diceCup();
    }
}

int main(){
    diceCup();
    return 0;
}