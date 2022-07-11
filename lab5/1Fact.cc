#include <stdio.h>

int fact(int N){
    if(!N)return 1;
    return N*fact(N-1);
}



int main(){
    int N;
    scanf("%d",&N);
    fact(N);
}
