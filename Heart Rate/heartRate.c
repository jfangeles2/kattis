#include <stdio.h>

void heartRate(){
    int n;
    float b,p, abpm, bpm;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%f %f\n",&b,&p);
        abpm = 60/p;
        bpm = b*60/p;
        printf("%.4f %.4f %.4f\n",bpm-abpm,bpm,bpm+abpm);
    }
}

int main(){
    heartRate();
    return 0;
}