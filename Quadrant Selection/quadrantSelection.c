#include <stdio.h>

void quadrantSelection(){
    int a,b;
    scanf("%d\n%d\n",&a,&b);
    if(a > 0){
        if(b > 0){
            printf("1\n");
        }else{
            printf("4\n");
        }
    }else{
        if(b > 0){
            printf("2\n");
        }else{
            printf("3\n");
        }
    }
}

int main(){
    quadrantSelection();
    return 0;
}