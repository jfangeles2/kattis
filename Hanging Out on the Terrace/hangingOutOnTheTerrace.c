#include <stdio.h>
#include <string.h>
void hangingOutOnTheTerrace(){
    int max, n, people,i,groupsNotAllowedToEnter=0,peopleInside=0;
    char eventName[6];
    scanf("%d %d\n",&max,&n);
    for(i=0;i<n;i++){
        scanf("%s %d",eventName,&people);
        if(!strcmp(eventName,"enter")){
            if(peopleInside + people <= max){
                peopleInside+=people;
            }else{
                groupsNotAllowedToEnter++;
            }
        }else{
            if(peopleInside - people >= 0){
                peopleInside-=people;
            }
        }
    }
    printf("%d\n",groupsNotAllowedToEnter);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        hangingOutOnTheTerrace();
    }
}

int main(){
    hangingOutOnTheTerrace();
    return 0;
}