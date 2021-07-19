#include <stdio.h>
#define KING 1
#define QUEEN 1
#define ROOK 2
#define BISHOP 2
#define KNIGHT 2
#define PAWN 8
void bijele(){
    int king,queen,rook,bishop,knight,pawn;
    scanf("%d %d %d %d %d %d\n",&king,&queen,&rook,&bishop,&knight,&pawn);
    printf("%d %d %d %d %d %d\n",KING-king,QUEEN-queen,ROOK-rook,BISHOP-bishop,KNIGHT-knight,PAWN-pawn);
}

void loop(int iter){
    int i;
    for(i=0;i < iter;i++){
        bijele();       
    }
}

int main(){
    bijele();
    return 0;
}