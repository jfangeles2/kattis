#include <stdio.h>

void r2(){
    int r1,s;
    scanf("%d %d\n",&r1,&s);
    printf("%d\n",((2*s) - r1));
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        r2();
    }
}

int main(){
    r2();
    return 0;
}