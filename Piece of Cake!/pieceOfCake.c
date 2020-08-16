#include <stdio.h>
#include <math.h>

void pieceOfCake(){
    double a,b,c,s1,s2;
    scanf("%lf %lf %lf\n",&a,&b,&c);
    s1 = a - b;
    s2 = a - c;
    if(b > s1){
        s1 = b;
    }
    if(c > s2){
        s2 = c;
    }
    printf("%d\n",(int)(s1*s2*4));
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        pieceOfCake();
    }
}

int main(){
    pieceOfCake();
    return 0;
}