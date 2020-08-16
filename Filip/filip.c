#include <stdio.h>

void filip(){
    int a,b,i,j;
    int c = 0;
    int d = 0;
    scanf("%d %d\n",&a,&b);
    for(i = 10,j=100;i<10000;i*=10,j/=10){
        c+=(a%i)/(i/10)*j;
        a-=a%i;
        d+=(b%i)/(i/10)*j;
        b-=b%i;
        // printf("%d %d in\n",a, c);
    }
    if(c > d){
        printf("%d\n",c);
    }else{
        printf("%d\n",d);
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        filip();
    }
}

int main(){
    filip();
    return 0;
}