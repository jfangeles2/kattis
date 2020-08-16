#include <stdio.h>

void planina(){
    int a,i, base = 2;
    scanf("%d\n",&a);
    for(i=0;i<a;i++){
        base+=(base - 1);
    }
    printf("%d\n",(base*base));
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        planina();
    }
}

int main(){
    planina();
    return 0;
}