#include <stdio.h>

int fact(int N){
    if(!N)return 1;
    return N*fact(N-1);
}

int sumOfFact(int N){
    int sUM=0;
    for(int i=1;i<=N;i++)sUM+=fact(i);
    return sUM;
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",sumOfFact(N));
}

