#include <stdio.h>

int sumOfDigit(int N){
    if(!N)return 0;
    return (N%10)+sumOfDigit(N/10);
}



int main(){
    int N;
    scanf("%d",&N);
    printf("%d",sumOfDigit(N));
}
    
