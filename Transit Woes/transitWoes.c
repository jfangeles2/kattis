#include <stdio.h>
#include <stdlib.h>
void transitWoes(){
    int startTime, timeOfClass, nTransitRoutes, i, j;
    scanf("%d %d %d\n",&startTime, &timeOfClass, &nTransitRoutes);
    int *timeToWalk = (int *)malloc(sizeof(int)*(nTransitRoutes+1));
    int *timeToRide = (int *)malloc(sizeof(int)*nTransitRoutes);
    int *intervalsOfRide = (int *)malloc(sizeof(int)*nTransitRoutes);
    for(i=0;i<(nTransitRoutes+1);i++){
        scanf("%d\n", timeToWalk+i);
    }
    for(i=0;i<nTransitRoutes;i++){
        scanf("%d\n", timeToRide+i);
    }
    for(i=0;i<nTransitRoutes;i++){
        scanf("%d\n", intervalsOfRide+i);
    }
    for(i=0;i<nTransitRoutes;i++){
        startTime+=(timeToWalk[i]);
        while(startTime%intervalsOfRide[i] != 0){
            startTime++;
        }
        startTime+=timeToRide[i];
    }
    startTime+=timeToWalk[i];
    if(startTime <= timeOfClass){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    free(timeToRide);
    free(timeToWalk);
    free(intervalsOfRide);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        transitWoes();
    }
}

int main(){
    transitWoes();
    return 0;
}