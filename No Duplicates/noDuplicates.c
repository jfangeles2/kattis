#include <stdio.h>
#include <string.h>
void noDuplicates(){
    char words[81][10];
    char sentence[81];
    fgets(sentence,81,stdin);
    if(sentence[strlen(sentence)-2] = 13){
        sentence[strlen(sentence)-2] = '\0';
    }else{
        sentence[strlen(sentence)-1] = '\0';
    }
    printf("%s\n",sentence);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        noDuplicates();
    }
}

int main(){
    loop(3);
    return 0;
}