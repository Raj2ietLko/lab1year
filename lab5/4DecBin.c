#include <stdio.h>



int DecBin(int N){
    if(!N)return 0;
    return DecBin(N>>1)*10+N&1;
    //return DecBin(N/2)*10 + N%2;  //this line is also same as above
}



int main(){
    int N;
    scanf("%d",&N);
    printf("%d",DecBin(N));
}
    
