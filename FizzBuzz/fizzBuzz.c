#include <stdio.h>

void fizzBuzz(){
    int x,y,n,i;
    scanf("%d %d %d\n",&x,&y,&n);
    for(i=1;i<n+1;i++){
        if(i%x==0 && i%y==0){
            printf("FizzBuzz\n");
        }
        else if(i%x==0){
            printf("Fizz\n");
        }else if(i%y==0){
            printf("Buzz\n");
        }else{
            printf("%d\n",i);
        }
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        fizzBuzz();
        printf("\n");
    }
}

int main(){
    fizzBuzz();
    return 0;
}