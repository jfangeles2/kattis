#include <stdio.h>

void nastyHack(){
    long a,na,ca;
    int i,n;
    scanf("%d\n", &n);
    for(i=0;i<n;i++){
        scanf("%ld %ld %ld",&na,&a,&ca);
        if(na<(a-ca)){
            printf("advertise\n");
        }
        else if(na==(a-ca)){
            printf("does not matter\n");
        }
        else{
            printf("do not advertise\n");
        }
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        nastyHack();
    }
}

int main(){
    loop(1);
    return 0;
}