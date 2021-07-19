#include <stdio.h>

void ans(){
    char str[30];
    scanf("%s",str);
    printf("%s %s %s\n", str, str, str);
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