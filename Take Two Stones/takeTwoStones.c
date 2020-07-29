#include <stdio.h>

int main(){
    //
    int num;
    //
    scanf("%d\n",&num);
    if(num%2 == 0){
        printf("Bob\n");
    }else{
        printf("Alice\n");
    }
    return 0;
}