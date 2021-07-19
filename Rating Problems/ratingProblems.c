// TODO
#include <stdio.h>
#include <math.h>

void ans(){
    int n, k, t;
    double avg = 0;
    scanf("%d %d\n", &n, &k);
    for(int i =0;i < k;i++){
        scanf("%d\n", &t);
        avg += t;
    }
    
    double x = (avg + ((n-k)*-3))/n;
    double y = (avg + ((n-k)*3))/n;

    printf("%.4g %.4g\n", x, y);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        ans();
    }
}

int main(){
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}