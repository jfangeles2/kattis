#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void createArray(int n, int **array){
    int i;
    *array = (int*)malloc(sizeof(int)*n);
    for(i = 0;i < n;i++){
        (*array)[i] = 0;
    }
}

void printArray(int *array, int size){
    int i;
    for(i = 0;i < size;i++){
        printf("%d\n",array[i]);
    }
}

void deallocate(int *array){
    free(array);
}

int main(){
    int n;
    int *array;
    int exp;
    int base;
    int i;
    scanf("%d",&n);
    createArray(n,&array);
    for(i = 0;i < n;i++){
        scanf("%d\n",&array[i]);
    }
    for(i = 0;i < n;i++){
        base = array[i] / 10;
        exp = array[i] % 10;
        array[i] = (int)(pow((double)base,(double)exp));
    }
    base = 0;
    for(i = 0;i < n;i++){
        base = base + array[i];
    }
    printf("%d\n",base);
    deallocate(array);
    return 0;
}

