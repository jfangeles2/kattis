#include <stdio.h>

int getFactorial(int num){
    int i,total=1;
    for(i=1;i<num+1;i++){
        total*=i;
    }
    return total;
}

void lastFactorialDigit(){
    int n,num,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&num);
        printf("%d\n",(getFactorial(num))%10);
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        lastFactorialDigit();
    }
}

int main(){
    lastFactorialDigit();
}