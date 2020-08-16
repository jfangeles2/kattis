#include <stdio.h>

void oddities(){
    int a,i,j;
    scanf("%d\n",&a);
    for(i=0;i<a;i++){
        scanf("%d\n",&j);
        if(j%2==0){
            printf("%d is even\n",j);
        }else{
            printf("%d is odd\n",j);
        }
    }
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        oddities();
    }
}

int main(){
    oddities();
    return 0;
}