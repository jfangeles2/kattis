#include <stdio.h>
#include <string.h>

void printFirstLetter(char string[], int i){
    printf("%c",string[i+1]);
}

void autori(char string[]){
    int i;

    for(i=0;i < strlen(string);i++){
        //if letter is '-' and not at the end
        if(string[i] == 45 && i != strlen(string)){
            printFirstLetter(string, i);
        }
    }
    printf("\n");
}

int main(){
    //
    char string[101];
    //
    scanf("%s\n",string);
    printf("%c",string[0]);
    autori(string);
    return 0;
}