#include <stdio.h>
void faktor(){
    float a,b;
    scanf("%f %f\n",&a,&b);
    printf("%d\n",(int)((b-1)*a+1));
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        faktor();        
    }
}

int main(){
    faktor();
    return 0;
}