#include <stdio.h>

typedef struct point{
    int x;
    int y;
}POINT;

void cetvrta(){
    POINT listOfPoints[4];
    int i;
    for(i=0;i<3;i++){
        scanf("%d %d\n",&(listOfPoints[i].x), &(listOfPoints[i].y));
    }
    if(listOfPoints[0].x == listOfPoints[1].x){
        printf("%d ",listOfPoints[2].x);
        if(listOfPoints[2].y == listOfPoints[0].y){
            printf("%d\n",listOfPoints[1].y);                        
        }else{
            printf("%d\n",listOfPoints[0].y);                    
        }
    }else if(listOfPoints[0].x == listOfPoints[2].x){
        printf("%d ",listOfPoints[1].x);
        if(listOfPoints[1].y == listOfPoints[0].y){
            printf("%d\n",listOfPoints[2].y);                        
        }else{
            printf("%d\n",listOfPoints[0].y);                    
        }
    }else{
        printf("%d ",listOfPoints[0].x);
        if(listOfPoints[0].y == listOfPoints[1].y){
            printf("%d\n",listOfPoints[2].y);                        
        }else{
            printf("%d\n",listOfPoints[1].y);                    
        }
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        cetvrta();
    }
}

int main(){
    cetvrta();
    return 0;
}