#include <stdio.h>
#include <stdlib.h>

void ans(){
    int a, b;
    scanf("%d %d\n", &a, &b);
    printf("%d\n", a+b);
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