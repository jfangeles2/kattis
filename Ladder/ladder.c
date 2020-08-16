#include <stdio.h>
#include <math.h>

void ladder(){
    double a,b;
    scanf("%lf %lf\n",&a,&b);
    printf("%d\n",(int)(ceil(a/sin((M_PI/180)*b))));
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        ladder();
    }
}

int main(){
    ladder();
    return 0;
}