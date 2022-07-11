#include <stdio.h>

int GCD(int a,int b){
    int t=a;
    a=a>b?a:b;
    b=b<t?b:t;
    if(a%b==0)return b;
    return GCD(a%b,b);
}



int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",GCD(a,b));
}
    
