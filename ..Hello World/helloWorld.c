#include <stdio.h>

void ans(){
    // code here
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