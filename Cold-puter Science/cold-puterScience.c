#include <stdio.h>

void coldPuterScience(){
    int n,i,a,c=0;
    scanf("%d\n",&n);
    for(i =0;i<n;i++){
        scanf("%d ",&a);
        if(a < 0){
            c++;
        }
    }
    printf("%d\n",c);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        coldPuterScience();
    }
}

int main(){
    coldPuterScience();
    return 0;
}