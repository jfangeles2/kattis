#include <stdio.h>

void grassSeedInc(){
    int n,i;
    float cost, length, width,totalArea=0;
    scanf("%f\n%d",&cost,&n);
    for(i=0;i<n;i++){
        scanf("%f %f\n",&length,&width);
        totalArea+=(length*width);
    }
    printf("%.7f\n",totalArea*cost);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        grassSeedInc();
    }
}

int main(){
    grassSeedInc();
    return 0;
}