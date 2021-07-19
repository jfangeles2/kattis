#include <stdio.h>
#include <stdlib.h>

void ans(){
    int a;
    scanf("%d\n", &a);
    if(a % 2 == 1){
        printf("still running\n");
        return;
    }
    int t = 0;
    int b, c;
    for(int i = 0;i < a;i+=2){
        scanf("%d\n%d\n", &b, &c);
        t += (c - b);
    }
    printf("%d\n", t);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        ans();
    }
}

int main(){
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}